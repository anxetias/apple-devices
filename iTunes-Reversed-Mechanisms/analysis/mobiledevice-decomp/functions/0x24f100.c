// rea decompile_all
// name: SERestoreInfo::UpdateTable::print
// address: 0x24f100
// body: available
// range: 0x24f100-0x24f31e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::UpdateTable::print(std::string, bool) const */

UpdateTable * __thiscall
SERestoreInfo::UpdateTable::print(UpdateTable *this,uint *param_2,uint *param_3)

{
  long lVar1;
  UpdateTable *pUVar2;
  char cVar3;
  ostream *poVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  long lVar9;
  undefined **local_178;
  undefined **local_170 [8];
  byte local_130;
  void *local_120;
  undefined *local_108 [19];
  UpdateTable *local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  void *local_58;
  id local_48;
  char local_47 [7];
  ulong local_40;
  char *local_38;
  
  std::ostringstream::ostringstream_abi_ne190102_((ostringstream *)&local_178);
  if (((byte)*param_3 & 1) == 0) {
    pbVar7 = (byte *)((long)param_3 + 1);
    uVar6 = (ulong)(byte)((byte)*param_3 >> 1);
  }
  else {
    pbVar7 = *(byte **)(param_3 + 4);
    uVar6 = *(ulong *)(param_3 + 2);
  }
  poVar4 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_178,(char *)pbVar7,uVar6);
  poVar4 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar4,"BSN: ",5);
  *(uint *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) =
       *(uint *)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 8) & 0xffffffb5 | 8;
  poVar4 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar4,"0x",2);
  cVar3 = std::ostream::operator<<(poVar4,*param_2);
  std::ios_base::getloc();
  plVar5 = (long *)std::locale::use_facet(&local_48);
  (**(code **)(*plVar5 + 0x38))(plVar5,10);
  std::locale::~locale((locale *)&local_48);
  std::ostream::put(cVar3);
  std::ostream::flush();
  lVar9 = *(long *)(param_2 + 2);
  lVar1 = *(long *)(param_2 + 4);
  local_70 = this;
  if (lVar9 != lVar1) {
    do {
      if ((*param_3 & 1) == 0) {
        local_58 = *(void **)(param_3 + 4);
        local_68 = *param_3;
        uStack_64 = param_3[1];
        uStack_60 = param_3[2];
        uStack_5c = param_3[3];
      }
      else {
        std::string::__init_copy_ctor_external
                  ((string *)&local_68,*(char **)(param_3 + 4),*(ulong *)(param_3 + 2));
      }
      UpdateTableEntry::print((UpdateTableEntry *)&local_48,lVar9,(string *)&local_68,0);
      uVar6 = local_40;
      pcVar8 = local_38;
      if (((byte)local_48 & 1) == 0) {
        uVar6 = (ulong)((byte)local_48 >> 1);
        pcVar8 = local_47;
      }
      std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                ((ostream *)&local_178,pcVar8,uVar6);
      if (((byte)local_48 & 1) != 0) {
        operator_delete(local_38);
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar1);
  }
  pUVar2 = local_70;
  std::stringbuf::str();
  local_178 = &PTR__ostringstream_0044ef30;
  local_108[0] = &DAT_0044ef58;
  local_170[0] = &PTR__stringbuf_0044f130;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  std::streambuf::~streambuf((streambuf *)local_170);
  std::ostream::~ostream((ostream *)&local_178);
  std::ios::~ios((ios *)local_108);
  return pUVar2;
}

