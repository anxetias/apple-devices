// rea decompile_all
// name: SERestoreInfo::ImageBinary::print
// address: 0x24e996
// body: available
// range: 0x24e996-0x24eb8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::ImageBinary::print(std::string, bool) const */

ImageBinary * __thiscall
SERestoreInfo::ImageBinary::print(ImageBinary *this,int *param_2,byte *param_3)

{
  ostream *poVar1;
  size_t sVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined **local_150;
  undefined **local_148 [8];
  byte local_108;
  void *local_f8;
  undefined *local_e0 [19];
  string local_48;
  char local_47 [7];
  ulong local_40;
  char *local_38;
  id local_30 [8];
  
  std::ostringstream::ostringstream_abi_ne190102_((ostringstream *)&local_150);
  if ((*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
    uVar4 = (ulong)(*param_3 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_3 + 8);
    pbVar6 = *(byte **)(param_3 + 0x10);
  }
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_150,(char *)pbVar6,uVar4);
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar1,"[",1);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_2[10]);
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar1,"] ",2);
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar1,"{",1);
  pcVar5 = (&PTR_s_preflight_0044f040)[*param_2];
  sVar2 = _strlen(pcVar5);
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar1,pcVar5,sVar2);
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar1,"}: ",3);
  std::string::__init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            (&local_48,*(uchar **)(param_2 + 4),*(uchar **)(param_2 + 4) + *(ulong *)(param_2 + 6),
             *(ulong *)(param_2 + 6));
  pcVar5 = local_38;
  if (((byte)local_48 & 1) == 0) {
    local_40 = (ulong)((byte)local_48 >> 1);
    pcVar5 = local_47;
  }
  poVar1 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar1,pcVar5,local_40);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet(local_30);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)local_30);
  std::ostream::put((char)poVar1);
  std::ostream::flush();
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  std::stringbuf::str();
  local_150 = &PTR__ostringstream_0044ef30;
  local_e0[0] = &DAT_0044ef58;
  local_148[0] = &PTR__stringbuf_0044f130;
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  std::streambuf::~streambuf((streambuf *)local_148);
  std::ostream::~ostream((ostream *)&local_150);
  std::ios::~ios((ios *)local_e0);
  return this;
}

