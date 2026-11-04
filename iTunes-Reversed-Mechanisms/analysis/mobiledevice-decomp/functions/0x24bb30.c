// rea decompile_all
// name: SERestoreInfo::P73BaseDeviceInfo::updateDeviceInfo
// address: 0x24bb30
// body: available
// range: 0x24bb30-0x24bf4d inclusive
// range: 0x24bf50-0x24c116 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24bf49 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24c112 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeviceInfo::updateDeviceInfo(P73BaseManifestQueryResponseDerSpec::ManifestResponseData
   const&) */

void __thiscall
SERestoreInfo::P73BaseDeviceInfo::updateDeviceInfo
          (P73BaseDeviceInfo *this,ManifestResponseData *param_1)

{
  __tree_node *p_Var1;
  int iVar2;
  undefined8 *puVar3;
  map *pmVar4;
  SEException *this_00;
  uint uVar5;
  __tree_node *p_Var6;
  uint uVar7;
  long lVar8;
  __tree_node *p_Var9;
  uint uVar10;
  undefined4 uVar11;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  *this_01;
  bool bVar12;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_148 [8];
  __tree_node *local_140;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_130 [8];
  __tree_node *local_128;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_118 [8];
  __tree_node *local_110;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_100 [8];
  __tree_node *local_f8;
  uint local_e4;
  undefined1 local_dd;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  __tree_node *local_b0 [3];
  undefined4 local_98;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_90 [24];
  undefined4 local_78;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_70 [24];
  undefined4 local_58;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_50 [8];
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_004412b8;
  uVar10 = 0;
  uVar5 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 << 8 | (uint)*(byte *)(*(long *)param_1 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_1 + 8) != lVar8);
  }
  *(uint *)(this + 8) = uVar5;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0x10) + lVar8);
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_1 + 0x18) != lVar8);
  }
  *(uint *)(this + 0xc) = uVar10;
  uVar5 = 0;
  uVar7 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0x20) + lVar8);
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_1 + 0x28) != lVar8);
  }
  *(uint *)(this + 0x10) = uVar7;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0x30) + lVar8);
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_1 + 0x38) != lVar8);
  }
  *(uint *)(this + 0x14) = uVar5;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0x40) + lVar8);
      lVar8 = lVar8 + 1;
    } while (*(long *)(param_1 + 0x48) != lVar8);
  }
  *(uint *)(this + 0x18) = uVar5;
  if (*(long *)(param_1 + 0x78) == 0) {
    *(undefined4 *)(this + 0x38) = 0;
LAB_0024befa:
    this_00 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_b8,"Unsupported chip ID");
    SEException::SEException(this_00,(string *)&local_b8,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this_00,&SEException::typeinfo,SEException::~SEException);
  }
  lVar8 = 0;
  uVar5 = 0;
  do {
    uVar5 = (uint)*(byte *)(*(long *)(param_1 + 0x70) + lVar8) | uVar5 << 8;
    lVar8 = lVar8 + 1;
  } while (*(long *)(param_1 + 0x78) != lVar8);
  *(uint *)(this + 0x38) = uVar5;
  if ((int)uVar5 < 100) {
    if (uVar5 - 0x36 < 2) {
      local_e4 = 5;
    }
    else if (uVar5 == 0x2c) {
      local_e4 = 4;
    }
    else {
      if (uVar5 != 0x38) goto LAB_0024befa;
      local_e4 = 6;
    }
  }
  else {
    if ((int)uVar5 < 200) {
      if (uVar5 != 100) {
        local_e4 = 2;
        if (uVar5 != 0x73) goto LAB_0024befa;
        goto LAB_0024bcb6;
      }
    }
    else if ((uVar5 != 0xd2) && (uVar5 != 200)) goto LAB_0024befa;
    local_e4 = 3;
  }
LAB_0024bcb6:
  *(uint *)(this + 0xb4) = local_e4;
  if ((getJCOPTrain(unsigned_int,unsigned_int)::JCOP_TRAIN == '\0') &&
     (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    local_c0 = 0x1400000f00;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_148,&local_c0,1,&local_dd);
    local_b8 = 3;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                         *)local_b0,local_148);
    local_c8 = 0x1400000300;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_130,&local_c8,1,&local_dc);
    local_98 = 4;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_90,local_130);
    local_d0 = 0x1400000100;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_118,&local_d0,1,&local_db);
    local_78 = 5;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_70,local_118);
    local_d8 = 0x1400000000;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(local_100,&local_d8,1,&local_da);
    this_01 = local_50;
    local_58 = 6;
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::map_abi_ne190102_(this_01,local_100);
    std::
    map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
    ::map_abi_ne190102_((map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
                         *)&getJCOPTrain(unsigned_int,unsigned_int)::JCOP_TRAIN,&local_b8,4,
                        &local_d9);
    lVar8 = -0x80;
    do {
      std::
      __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
      ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
                 *)this_01,*(__tree_node **)(this_01 + 8));
      this_01 = this_01 + -0x20;
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 0);
    std::
    __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
    ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
               *)local_100,local_f8);
    std::
    __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
    ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
               *)local_118,local_110);
    std::
    __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
    ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
               *)local_130,local_128);
    std::
    __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
    ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
               *)local_148,local_140);
    ___cxa_guard_release();
  }
  uVar11 = 0xffffffff;
  puVar3 = DAT_004a68b8;
  do {
    if (puVar3 == (undefined8 *)0x0) goto LAB_0024bd7f;
    if (*(uint *)(puVar3 + 4) <= local_e4) {
      if (local_e4 <= *(uint *)(puVar3 + 4)) {
        pmVar4 = (map *)std::
                        map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
                        ::at((map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
                              *)&getJCOPTrain(unsigned_int,unsigned_int)::JCOP_TRAIN,&local_e4);
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::map_abi_ne190102_((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)&local_b8,pmVar4);
        p_Var9 = (__tree_node *)CONCAT44(uStack_b4,local_b8);
        uVar11 = 0xffffffff;
        while (p_Var9 != (__tree_node *)local_b0) {
          if (*(uint *)(p_Var9 + 0x1c) <= uVar10) {
            uVar11 = *(undefined4 *)(p_Var9 + 0x20);
          }
          p_Var6 = p_Var9;
          p_Var1 = *(__tree_node **)(p_Var9 + 8);
          if (*(__tree_node **)(p_Var9 + 8) == (__tree_node *)0x0) {
            do {
              p_Var9 = *(__tree_node **)(p_Var6 + 0x10);
              bVar12 = (__tree_node *)*(__tree_node ***)p_Var9 != p_Var6;
              p_Var6 = p_Var9;
            } while (bVar12);
          }
          else {
            do {
              p_Var9 = p_Var1;
              p_Var1 = *(__tree_node **)p_Var9;
            } while (*(__tree_node **)p_Var9 != (__tree_node *)0x0);
          }
        }
        std::
        __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
        ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
                   *)&local_b8,local_b0[0]);
LAB_0024bd7f:
        *(undefined4 *)(this + 0xb8) = uVar11;
        uVar5 = 0;
        uVar10 = 0;
        if (*(long *)(param_1 + 200) != 0) {
          lVar8 = 0;
          uVar10 = 0;
          do {
            uVar10 = uVar10 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0xc0) + lVar8);
            lVar8 = lVar8 + 1;
          } while (*(long *)(param_1 + 200) != lVar8);
        }
        *(uint *)(this + 0x8c) = uVar10;
        if (*(long *)(param_1 + 0xb8) != 0) {
          lVar8 = 0;
          uVar5 = 0;
          do {
            uVar5 = uVar5 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0xb0) + lVar8);
            lVar8 = lVar8 + 1;
          } while (*(long *)(param_1 + 0xb8) != lVar8);
        }
        *(uint *)(this + 0x88) = uVar5;
        if (*(long *)(param_1 + 0xd8) != 0) {
          lVar8 = 0;
          uVar5 = 0;
          do {
            uVar5 = (uint)*(byte *)(*(long *)(param_1 + 0xd0) + lVar8) | uVar5 << 8;
            lVar8 = lVar8 + 1;
          } while (*(long *)(param_1 + 0xd8) != lVar8);
          *(uint *)(this + 0x90) = uVar5;
        }
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20),
                   *(uchar **)(param_1 + 0x60),
                   *(uchar **)(param_1 + 0x60) + *(long *)(param_1 + 0x68),*(long *)(param_1 + 0x68)
                  );
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x40),
                   *(uchar **)(param_1 + 0x80),
                   *(uchar **)(param_1 + 0x80) + *(long *)(param_1 + 0x88),*(long *)(param_1 + 0x88)
                  );
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x58),
                   *(uchar **)(param_1 + 0x90),
                   *(uchar **)(param_1 + 0x90) + *(long *)(param_1 + 0x98),*(long *)(param_1 + 0x98)
                  );
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x70),
                   *(uchar **)(param_1 + 0xa0),
                   *(uchar **)(param_1 + 0xa0) + *(long *)(param_1 + 0xa8),*(long *)(param_1 + 0xa8)
                  );
        lVar8 = *(long *)(param_1 + 0xe8);
        if (lVar8 != 0) {
          std::vector<unsigned_char,std::allocator<unsigned_char>>::
          __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                    ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x98),
                     *(uchar **)(param_1 + 0xe0),*(uchar **)(param_1 + 0xe0) + lVar8,lVar8);
        }
        if (*(long *)(param_1 + 0x58) == 0) {
          uVar5 = 0;
        }
        else {
          lVar8 = 0;
          uVar5 = 0;
          do {
            uVar5 = uVar5 << 8 | (uint)*(byte *)(*(long *)(param_1 + 0x50) + lVar8);
            lVar8 = lVar8 + 1;
          } while (*(long *)(param_1 + 0x58) != lVar8);
        }
        *(uint *)(this + 0x1c) = uVar5;
        if (*(long *)PTR____stack_chk_guard_004412b8 != local_48[2]) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}

