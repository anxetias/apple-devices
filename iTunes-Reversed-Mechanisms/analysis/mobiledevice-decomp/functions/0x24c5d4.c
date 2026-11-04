// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::getStateName
// address: 0x24c5d4
// body: available
// range: 0x24c5d4-0x24c7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24c7c7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::getStateName(SERestoreInfo::AMS_UOS_ID) */

P73BaseDeviceInfo * __thiscall
SERestoreInfo::P73BaseDeviceInfo::getStateName(P73BaseDeviceInfo *this,int param_2)

{
  undefined8 uVar1;
  __tree_node *p_Var2;
  byte *pbVar3;
  long lVar4;
  map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
  local_148 [8];
  __tree_node *local_140 [2];
  int local_130;
  undefined1 local_129;
  undefined4 local_128 [2];
  undefined1 local_120 [24];
  undefined4 local_108;
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined1 local_c0 [24];
  undefined4 local_a8;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined1 local_40 [24];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_128[0] = 0x5a9b;
  local_130 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_120,"EXPORT_REQUIRED");
  local_108 = 0xb933;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_100,"IMPORT_REQUIRED");
  local_e8 = 0xb901;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_e0,"UOS1");
  local_c8 = 0xb902;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_c0,"UOS2");
  local_a8 = 0xa501;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_a0,"UOS1_ERROR");
  local_88 = 0xa502;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_80,"UOS2_ERROR");
  local_68 = 0xb9b9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_60,"EXPORT_FINISHED");
  local_48 = 0xb911;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_40,"UOS1_KTP");
  std::
  map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
  ::map_abi_ne190102_(local_148,local_128,8,&local_129);
  lVar4 = 0x100;
  do {
    if ((*(byte *)((long)local_140 + lVar4) & 1) != 0) {
      operator_delete(*(void **)((long)local_128 + lVar4 + -8));
    }
    lVar4 = lVar4 + -0x20;
    p_Var2 = local_140[0];
  } while (lVar4 != 0);
  do {
    if (p_Var2 == (__tree_node *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (this,"UNK_STATE");
LAB_0024c75c:
      std::
      __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
      ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
                 *)local_148,local_140[0]);
      if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return this;
    }
    if (*(int *)(p_Var2 + 0x20) <= param_2) {
      if (param_2 <= *(int *)(p_Var2 + 0x20)) {
        pbVar3 = (byte *)std::
                         map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
                         ::at(local_148,(AMS_UOS_ID *)&local_130);
        if ((*pbVar3 & 1) == 0) {
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(pbVar3 + 0x10);
          uVar1 = *(undefined8 *)(pbVar3 + 8);
          *(undefined8 *)this = *(undefined8 *)pbVar3;
          *(undefined8 *)(this + 8) = uVar1;
        }
        else {
          std::string::__init_copy_ctor_external
                    ((string *)this,*(char **)(pbVar3 + 0x10),*(ulong *)(pbVar3 + 8));
        }
        goto LAB_0024c75c;
      }
      p_Var2 = p_Var2 + 8;
    }
    p_Var2 = *(__tree_node **)p_Var2;
  } while( true );
}

