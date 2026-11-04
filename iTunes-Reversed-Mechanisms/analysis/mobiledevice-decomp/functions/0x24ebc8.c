// rea decompile_all
// name: SERestoreInfo::UpdateTableEntry::print
// address: 0x24ebc8
// body: available
// range: 0x24ebc8-0x24f041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24f03d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* SERestoreInfo::UpdateTableEntry::print(std::string, bool) const */

UpdateTableEntry * __thiscall
SERestoreInfo::UpdateTableEntry::print(UpdateTableEntry *this,long *param_2,byte *param_3)

{
  undefined2 uVar1;
  ushort *puVar2;
  code *pcVar3;
  UpdateTableEntry *pUVar4;
  ostream *poVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char *pcVar13;
  ushort *puVar14;
  long lVar15;
  bool bVar16;
  undefined **local_200;
  undefined **local_1f8 [8];
  byte local_1b8;
  void *local_1a8;
  undefined *local_190 [19];
  long local_f8;
  UpdateTableEntry *local_f0;
  ushort *local_e8;
  ushort *puStack_e0;
  undefined8 local_d8;
  byte abStack_d0 [8];
  undefined4 *local_c8;
  long *local_c0;
  P73BaseDeviceInfo local_b8;
  char local_b7 [7];
  ulong local_b0;
  char *local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = param_2;
  std::ostringstream::ostringstream_abi_ne190102_((ostringstream *)&local_200);
  if ((*param_3 & 1) == 0) {
    pbVar11 = param_3 + 1;
    uVar8 = (ulong)(*param_3 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_3 + 8);
    pbVar11 = *(byte **)(param_3 + 0x10);
  }
  std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
            ((ostream *)&local_200,(char *)pbVar11,uVar8);
  if ((undefined8 *)local_c0[1] == (undefined8 *)*local_c0) {
    std::
    vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
    ::__throw_out_of_range_abi_ne190102_();
  }
  else {
    uVar1 = **(undefined2 **)*local_c0;
    poVar5 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                       ((ostream *)&local_200,"|",1);
    P73BaseDeviceInfo::getStateName(&local_b8,uVar1);
    pcVar13 = local_a8;
    if (((byte)local_b8 & 1) == 0) {
      local_b0 = (ulong)((byte)local_b8 >> 1);
      pcVar13 = local_b7;
    }
    poVar5 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                       (poVar5,pcVar13,local_b0);
    std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar5,"| ",2);
    if (((byte)local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    local_c8 = operator_new(0x10);
    *local_c8 = 1;
    local_c8[1] = 2;
    local_c8[2] = 3;
    local_c8[3] = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_b8,"AMS");
    local_f0 = this;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_a0,"RSN");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_88,"CSN");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_70,"FSN");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_58,"ACTION");
    lVar15 = 0;
    puVar12 = local_c8;
    while( true ) {
      lVar6 = (long)*(int *)((long)puVar12 + lVar15);
      if (((byte)(&local_b8)[lVar6 * 0x18] & 1) == 0) {
        uVar8 = (ulong)((byte)(&local_b8)[lVar6 * 0x18] >> 1);
        pcVar13 = local_b7 + lVar6 * 0x18;
      }
      else {
        pcVar13 = *(char **)(local_a0 + lVar6 * 0x18 + -8);
        uVar8 = (&local_b0)[lVar6 * 3];
      }
      poVar5 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                         ((ostream *)&local_200,pcVar13,uVar8);
      std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar5," { ",3);
      uVar8 = (ulong)*(int *)((long)puVar12 + lVar15);
      lVar6 = *local_c0;
      uVar9 = (local_c0[1] - lVar6 >> 3) * -0x5555555555555555;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) break;
      local_e8 = (ushort *)0x0;
      puStack_e0 = (ushort *)0x0;
      local_d8 = 0;
      puVar2 = *(ushort **)(lVar6 + uVar8 * 0x18);
      puVar14 = *(ushort **)(lVar6 + 8 + uVar8 * 0x18);
      local_f8 = lVar15;
      std::vector<unsigned_short,std::allocator<unsigned_short>>::
      __init_with_size_abi_ne190102_<unsigned_short*,unsigned_short*>
                ((vector<unsigned_short,std::allocator<unsigned_short>> *)&local_e8,puVar2,puVar14,
                 (long)puVar14 - (long)puVar2 >> 1);
      puVar2 = puStack_e0;
      if (local_e8 != puStack_e0) {
        iVar10 = 0;
        puVar14 = local_e8;
        do {
          bVar16 = iVar10 != 0;
          iVar10 = iVar10 + -1;
          if (bVar16) {
            std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                      ((ostream *)&local_200,",",1);
          }
          *(uint *)((long)local_1f8 + *(long *)((long)local_200 + -0x18)) =
               *(uint *)((long)local_1f8 + *(long *)((long)local_200 + -0x18)) & 0xffffffb5 | 8;
          poVar5 = std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                             ((ostream *)&local_200,"0x",2);
          poVar5 = (ostream *)std::ostream::operator<<(poVar5,*puVar14);
          std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>(poVar5," ",1);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
      std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                ((ostream *)&local_200,"} ",2);
      puVar12 = local_c8;
      lVar15 = local_f8;
      if (local_e8 != (ushort *)0x0) {
        puStack_e0 = local_e8;
        operator_delete(local_e8);
      }
      lVar15 = lVar15 + 4;
      if (lVar15 == 0x10) {
        std::ios_base::getloc();
        pUVar4 = local_f0;
        plVar7 = (long *)std::locale::use_facet((id *)&local_e8);
        (**(code **)(*plVar7 + 0x38))(plVar7,10);
        std::locale::~locale((locale *)&local_e8);
        std::ostream::put('\0');
        std::ostream::flush();
        std::stringbuf::str();
        lVar15 = 0x78;
        do {
          if ((abStack_d0[lVar15] & 1) != 0) {
            operator_delete(*(void **)((long)&local_c0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != 0);
        operator_delete(local_c8);
        local_200 = &PTR__ostringstream_0044ef30;
        local_190[0] = &DAT_0044ef58;
        local_1f8[0] = &PTR__stringbuf_0044f130;
        if ((local_1b8 & 1) != 0) {
          operator_delete(local_1a8);
        }
        std::streambuf::~streambuf((streambuf *)local_1f8);
        std::ostream::~ostream((ostream *)&local_200);
        std::ios::~ios((ios *)local_190);
        if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return pUVar4;
      }
    }
    std::
    vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
    ::__throw_out_of_range_abi_ne190102_();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

