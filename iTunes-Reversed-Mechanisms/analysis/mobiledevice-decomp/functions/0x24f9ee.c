// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::print
// address: 0x24f9ee
// body: available
// range: 0x24f9ee-0x24fe45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::print(bool) const */

P73BaseDeliveryObject * __thiscall
SERestoreInfo::P73BaseDeliveryObject::print(P73BaseDeliveryObject *this,bool param_1)

{
  long *plVar1;
  ostream *poVar2;
  long *plVar3;
  ulong uVar4;
  undefined7 in_register_00000031;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  bool bVar8;
  undefined **local_190;
  undefined **local_188 [8];
  byte local_148;
  void *local_138;
  undefined *local_120 [19];
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  P73BaseDeliveryObject *local_58;
  id local_50 [8];
  string local_48;
  char local_47 [7];
  ulong local_40;
  char *local_38;
  
  lVar5 = CONCAT71(in_register_00000031,param_1);
  local_58 = this;
  std::ostringstream::ostringstream_abi_ne190102_((ostringstream *)&local_190);
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_190,"Details: ",9);
  std::string::__init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            (&local_48,*(uchar **)(lVar5 + 0x60),
             *(uchar **)(lVar5 + 0x60) + *(ulong *)(lVar5 + 0x68),*(ulong *)(lVar5 + 0x68));
  uVar4 = local_40;
  pcVar6 = local_38;
  if (((byte)local_48 & 1) == 0) {
    uVar4 = (ulong)((byte)local_48 >> 1);
    pcVar6 = local_47;
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar2,pcVar6,uVar4);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet(local_50);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)local_50);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_190,"FactoryPostflight revision: ",0x1c);
  std::to_string((int)&local_48);
  uVar4 = local_40;
  pcVar6 = local_38;
  if (((byte)local_48 & 1) == 0) {
    uVar4 = (ulong)((byte)local_48 >> 1);
    pcVar6 = local_47;
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar2,pcVar6,uVar4);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet(local_50);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)local_50);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_190,"UpdateTable: ",0xd);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet((id *)&local_48);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)&local_48);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_70,"\t");
  UpdateTable::print((UpdateTable *)&local_48,lVar5 + 0x78,local_70,0);
  uVar4 = local_40;
  pcVar6 = local_38;
  if (((byte)local_48 & 1) == 0) {
    uVar4 = (ulong)((byte)local_48 >> 1);
    pcVar6 = local_47;
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     (poVar2,pcVar6,uVar4);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet(local_50);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)local_50);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  poVar2 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                     ((ostream *)&local_190,"Binaries: ",10);
  std::ios_base::getloc();
  plVar3 = (long *)std::locale::use_facet((id *)&local_48);
  (**(code **)(*plVar3 + 0x38))(plVar3,10);
  std::locale::~locale((locale *)&local_48);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  plVar3 = *(long **)(lVar5 + 8);
  if (plVar3 != (long *)(lVar5 + 0x10)) {
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_88,"\t");
      ImageBinary::print((ImageBinary *)&local_48,plVar3 + 5,local_88,0);
      uVar4 = local_40;
      pcVar6 = local_38;
      if (((byte)local_48 & 1) == 0) {
        uVar4 = (ulong)((byte)local_48 >> 1);
        pcVar6 = local_47;
      }
      std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                ((ostream *)&local_190,pcVar6,uVar4);
      if (((byte)local_48 & 1) != 0) {
        operator_delete(local_38);
      }
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      plVar1 = (long *)plVar3[1];
      plVar7 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar7[2];
          bVar8 = (long *)*plVar3 != plVar7;
          plVar7 = plVar3;
        } while (bVar8);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    } while (plVar3 != (long *)(lVar5 + 0x10));
  }
  std::stringbuf::str();
  local_190 = &PTR__ostringstream_0044ef30;
  local_120[0] = &DAT_0044ef58;
  local_188[0] = &PTR__stringbuf_0044f130;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  std::streambuf::~streambuf((streambuf *)local_188);
  std::ostream::~ostream((ostream *)&local_190);
  std::ios::~ios((ios *)local_120);
  return local_58;
}

