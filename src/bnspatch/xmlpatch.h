#pragma once
#include "pch.h"
#include "xml_snr_addon.h"

const std::vector<xml_snr_addon_base> &get_xml_snr_addons();
std::filesystem::path documents_path();
std::vector<std::reference_wrapper<const std::pair<std::wstring, std::wstring>>> get_relevant_addons(const wchar_t *xml);
std::vector<pugi::xml_node> get_relevant_patches(const wchar_t *xml);
const pugi::xml_document &get_or_load_patches();
void preprocess(pugi::xml_document &patches_doc, const std::filesystem::path &path, std::unordered_set<std::wstring> &include_guard);
std::filesystem::path patches_path();
void patch_node(
  pugi::xml_document &doc,
  const pugi::xml_encoding encoding,
  const pugi::xpath_node &ctx,
  const pugi::xml_object_range<pugi::xml_node_iterator> &children,
  std::unordered_map<std::wstring, pugi::xml_node> &saved_nodes);
pugi::xml_parse_result try_load_file(
  pugi::xml_document &document,
  const std::filesystem::path &path,
  unsigned int options = pugi::parse_default,
  pugi::xml_encoding encoding = pugi::encoding_auto);
