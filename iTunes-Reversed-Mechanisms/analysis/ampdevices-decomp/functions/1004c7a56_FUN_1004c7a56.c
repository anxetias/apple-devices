// name: FUN_1004c7a56
// address: 1004c7a56

undefined8 FUN_1004c7a56(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined2 local_1c8;
  undefined1 uStack_1c6;
  undefined1 uStack_1c5;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  undefined2 local_1a8;
  undefined2 uStack_1a6;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  undefined2 uStack_198;
  ulong local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 auStack_148 [16];
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120;
  cfstringStruct *local_118;
  long *local_110;
  ulong local_108 [2];
  cfstringStruct *local_f8 [2];
  long *local_e8;
  char local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  ulong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_120 = param_2;
  if (*(long **)(param_2 + 0x18) == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_d8 = 0x8220202;
      uStack_d4 = 0x7a0a90;
      uStack_d0 = 1;
      uStack_cc = 0x822;
      uStack_ca = 0x561e;
      uStack_c8 = 0x1007d;
      uStack_c4 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10032f0f2(param_1);
    goto LAB_1004c83f5;
  }
  local_1a8 = 0;
  uStack_1a6 = 0;
  uStack_1a4 = 0;
  uStack_1a2 = 0;
  uStack_1a0 = 0;
  uStack_19e = 0;
  uStack_19c = 0;
  uStack_19a = 0;
  uStack_1b8 = 0;
  uStack_1b6 = 0;
  uStack_1b4 = 0;
  uStack_1b2 = 0;
  uStack_1b0 = 0;
  uStack_1ae = 0;
  uStack_1ac = 0;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  uStack_1c4 = 0;
  uStack_1c2 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1ba = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_198 = 0;
  local_e8 = *(long **)(param_2 + 0x18);
  FUN_1004c7638();
  local_d9 = *(char *)(local_120 + 0x20);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_ca = 0;
  local_98 = 0;
  FUN_1004c7638();
  uStack_198 = local_98;
  local_1a8 = (undefined2)local_a8;
  uStack_1a6 = (undefined2)((ulong)local_a8 >> 0x10);
  uStack_1a4 = (undefined2)((ulong)local_a8 >> 0x20);
  uStack_1a2 = (undefined2)((ulong)local_a8 >> 0x30);
  uStack_1a0 = (undefined2)uStack_a0;
  uStack_19e = (undefined2)((ulong)uStack_a0 >> 0x10);
  uStack_19c = (undefined2)((ulong)uStack_a0 >> 0x20);
  uStack_19a = (undefined2)((ulong)uStack_a0 >> 0x30);
  uStack_1b8 = (undefined2)local_b8;
  uStack_1b6 = (undefined2)((ulong)local_b8 >> 0x10);
  uStack_1b4 = (undefined2)((ulong)local_b8 >> 0x20);
  uStack_1b2 = (undefined2)((ulong)local_b8 >> 0x30);
  uStack_1b0 = (undefined2)uStack_b0;
  uStack_1ae = (undefined2)((ulong)uStack_b0 >> 0x10);
  uStack_1ac = uStack_b0._4_4_;
  local_1c8 = (undefined2)uStack_c8;
  uStack_1c6 = (undefined1)((uint)uStack_c8 >> 0x10);
  uStack_1c5 = (undefined1)((uint)uStack_c8 >> 0x18);
  uStack_1c4 = uStack_c4;
  uStack_1c2 = uStack_c2;
  uStack_1c0 = (undefined4)uStack_c0;
  uStack_1bc = (undefined2)((ulong)uStack_c0 >> 0x20);
  uStack_1ba = (undefined2)((ulong)uStack_c0 >> 0x30);
  local_1d8 = CONCAT44(uStack_d4,local_d8);
  uStack_1d0 = CONCAT44(CONCAT22(uStack_ca,uStack_cc),uStack_d0);
  local_190 = local_90;
  local_138 = param_1;
  FUN_1001b80b2(local_188,local_88);
  FUN_1001b80b2(local_178,local_78);
  FUN_1001b80b2(local_168,local_68);
  local_128 = local_158;
  FUN_1001a7b1c(local_128,auStack_58);
  FUN_1001b80b2(auStack_148,auStack_48);
  local_130 = auStack_148;
  FUN_1001b7a50(auStack_48);
  FUN_1001a8fac(auStack_58);
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  param_1 = local_138;
  if ((int)local_e8[0xb] == 0x61747369) {
LAB_1004c7c2f:
    if (local_e8[1] == 0) goto LAB_1004c7da6;
    if ((int)local_e8[0xb] == 0x61747369) {
LAB_1004c7c86:
      uStack_1d0 = local_e8[3];
      local_1c8 = *(undefined2 *)((long)local_e8 + 0x62);
      uStack_1c6 = FUN_1005e4b52();
      lVar2 = local_e8[0xf];
      uStack_1c2 = (undefined2)lVar2;
      uStack_1c0 = (undefined4)((ulong)lVar2 >> 0x10);
      uStack_1bc = (undefined2)((ulong)lVar2 >> 0x30);
      uVar6 = local_1d8 | 1;
      if (local_d9 == '\0') {
        uStack_1b6 = (undefined2)*(undefined4 *)((long)local_e8 + 0x6c);
        uStack_1b4 = (undefined2)((uint)*(undefined4 *)((long)local_e8 + 0x6c) >> 0x10);
        uStack_1a6 = (undefined2)(int)local_e8[9];
        uStack_1a4 = (undefined2)((uint)(int)local_e8[9] >> 0x10);
        uStack_1a2 = (undefined2)*(undefined4 *)((long)local_e8 + 0x4c);
        uStack_1a0 = (undefined2)((uint)*(undefined4 *)((long)local_e8 + 0x4c) >> 0x10);
        uStack_19e = (undefined2)(int)local_e8[10];
        uStack_19c = (undefined2)((uint)(int)local_e8[10] >> 0x10);
        uStack_19a = (undefined2)*(undefined4 *)((long)local_e8 + 0x54);
        uStack_198 = (undefined2)((uint)*(undefined4 *)((long)local_e8 + 0x54) >> 0x10);
        uStack_1b2 = (undefined2)(int)local_e8[0x14];
        uStack_1b0 = (undefined2)((uint)(int)local_e8[0x14] >> 0x10);
        local_1d8 = local_1d8 | 0x2f;
        lVar2 = local_e8[0x13];
        uStack_1ae = (undefined2)lVar2;
        uStack_1ac = (undefined4)((ulong)lVar2 >> 0x10);
        local_1a8 = (undefined2)((ulong)lVar2 >> 0x30);
      }
      else {
        uVar4 = *(uint *)(local_120 + 0x24);
        if ((uVar4 & 8) != 0) {
          lVar2 = local_e8[9];
          uStack_1a6 = (undefined2)lVar2;
          uStack_1a4 = (undefined2)((ulong)lVar2 >> 0x10);
          uStack_1a2 = (undefined2)((ulong)lVar2 >> 0x20);
          uStack_1a0 = (undefined2)((ulong)lVar2 >> 0x30);
          uVar6 = local_1d8 | 5;
        }
        local_1d8 = uVar6;
        if ((uVar4 >> 8 & 1) != 0) {
          lVar2 = local_e8[10];
          uStack_19e = (undefined2)lVar2;
          uStack_19c = (undefined2)((ulong)lVar2 >> 0x10);
          uStack_19a = (undefined2)((ulong)lVar2 >> 0x20);
          uStack_198 = (undefined2)((ulong)lVar2 >> 0x30);
          local_1d8 = uVar6 | 0x20;
        }
        if ((uVar4 & 2) != 0) {
          uStack_1b2 = (undefined2)(int)local_e8[0x14];
          uStack_1b0 = (undefined2)((uint)(int)local_e8[0x14] >> 0x10);
          local_1d8 = local_1d8 | 8;
          lVar2 = local_e8[0x13];
          uStack_1ae = (undefined2)lVar2;
          uStack_1ac = (undefined4)((ulong)lVar2 >> 0x10);
          local_1a8 = (undefined2)((ulong)lVar2 >> 0x30);
        }
        if ((uVar4 & 0x10) == 0) goto LAB_1004c7e76;
      }
      uStack_1c5 = (undefined1)local_e8[0x11];
      uStack_1ba = (undefined2)*(undefined4 *)((long)local_e8 + 0xa4);
      uStack_1b8 = (undefined2)((uint)*(undefined4 *)((long)local_e8 + 0xa4) >> 0x10);
      local_1d8 = local_1d8 | 0x10;
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d8 = 0x8220202;
        uStack_d4 = 0x7ab58c;
        uStack_d0 = 1;
        uStack_cc = 0x822;
        uStack_ca = 0xa3ac;
        uStack_c8 = 0x1007b;
        uStack_c4 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if ((cVar3 != '\0') && (local_e8[1] != 0)) goto LAB_1004c7c86;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d8 = 0x8220202;
        uStack_d4 = 0x7a0a90;
        uStack_d0 = 1;
        uStack_cc = 0x822;
        uStack_ca = 0x55e0;
        uStack_c8 = 0x1007d;
        uStack_c4 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1004c7e76:
    if ((int)local_e8[0xb] != 0x61747369) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_d8 = 0x8220202;
        uStack_d4 = 0x7ab58c;
        uStack_d0 = 1;
        uStack_cc = 0x822;
        uStack_ca = 0xa3ac;
        uStack_c8 = 0x1007b;
        uStack_c4 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 != '\0') goto LAB_1004c7eb3;
LAB_1004c7eef:
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        pcVar7 = "ArtistInfoIsValid(inArtistInfo)";
        goto LAB_1004c84e7;
      }
      goto LAB_1004c7f0c;
    }
LAB_1004c7eb3:
    lVar2 = local_e8[1];
    if (lVar2 == 0) goto LAB_1004c7eef;
    FUN_1001b7a44(&local_d8);
    if (local_d9 == '\0') {
      FUN_1001ddc17(local_f8,lVar2 + 0x1cb0,(int)local_e8[0x1e],0);
      FUN_1001b80b2(local_188,local_f8);
      FUN_1001b7a50(local_f8);
      local_190 = local_190 | 1;
      FUN_1001ddc17(local_f8,lVar2 + 0x24d0,(int)local_e8[0x20],0);
      FUN_1001b80b2(local_178,local_f8);
      FUN_1001b7a50(local_f8);
      local_190 = local_190 | 2;
LAB_1004c7fa5:
      FUN_1001b7eb0(local_f8,local_e8[0x12]);
      FUN_1001b80b2(local_168,local_f8);
      FUN_1001b7a50(local_f8);
      local_190 = local_190 | 4;
      if (local_d9 != '\0') {
        uVar4 = *(uint *)(local_120 + 0x24);
        goto LAB_1004c7ff8;
      }
LAB_1004c7ffc:
      FUN_1001b7a5c(local_f8,local_e8 + 0x15);
      FUN_1001b80b2(local_130,local_f8);
      FUN_1001b7a50(local_f8);
      local_190 = local_190 | 0x10;
      if (local_d9 != '\0') {
        uVar4 = *(uint *)(local_120 + 0x24);
        goto LAB_1004c804f;
      }
LAB_1004c8057:
      FUN_10032f0f2(local_f8);
      (**(code **)(*local_e8 + 0x78))(&local_118,local_e8,0);
      if (local_118 != (cfstringStruct *)0x0) {
        FUN_1001a8d64(local_108,local_118->field3_0x18);
        FUN_1001a7b1c(local_f8,local_108);
        FUN_1001a8fac(local_108);
      }
      FUN_1001aa172(local_108,local_f8);
      FUN_1001a7b1c(local_128,local_108);
      FUN_1001a8fac(local_108);
      local_190 = local_190 | 8;
      if (local_110 != (long *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(local_f8);
    }
    else {
      uVar4 = *(uint *)(local_120 + 0x24);
      if ((uVar4 & 2) != 0) goto LAB_1004c7fa5;
LAB_1004c7ff8:
      if ((char)uVar4 < '\0') goto LAB_1004c7ffc;
LAB_1004c804f:
      if ((uVar4 & 4) != 0) goto LAB_1004c8057;
    }
    FUN_1001b7a50(&local_d8);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_d8 = 0x8220202;
      uStack_d4 = 0x7ab58c;
      uStack_d0 = 1;
      uStack_cc = 0x822;
      uStack_ca = 0xa3ac;
      uStack_c8 = 0x1007b;
      uStack_c4 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 != '\0') goto LAB_1004c7c2f;
LAB_1004c7da6:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "ArtistInfo::IsValid(inArtistInfo)";
LAB_1004c84e7:
      uStack_cc = 0x822;
      uStack_d0 = 1;
      uStack_d4 = 0x7a0a90;
      local_d8 = 0x8220202;
      uStack_ca = SUB82(pcVar7,0);
      uStack_c8 = (undefined4)((ulong)pcVar7 >> 0x10);
      uStack_c4 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_d8,0x16);
    }
LAB_1004c7f0c:
    FUN_1001782e9(0,0);
  }
  FUN_10032f0f2(param_1);
  if (local_1d8 != 0) {
    FUN_1001a833e(&local_d8,&local_1d8,0x42,0);
    local_118 = &cf_fixed;
    FUN_1001a7b90(local_f8);
    FUN_1001a7b90(local_108,&local_d8);
    FUN_1001a9c16(param_1,local_f8,local_108);
    FUN_1001ab240(local_108);
    FUN_1001ab240(local_f8);
    FUN_1001a85d4(&local_d8);
  }
  local_f8[0] = &cf_validFields;
  FUN_1001a7b90(&local_d8);
  local_108[0] = local_190;
  FUN_10021f1aa(&local_118,local_108,0);
  FUN_10021f14e(param_1,&local_d8,&local_118);
  FUN_1001aae6c(&local_118);
  FUN_1001ab240(&local_d8);
  if ((local_190 & 1) != 0) {
    local_f8[0] = &cf_trackArtist;
    FUN_1001a7b90(&local_d8);
    FUN_10021f1e0(param_1,&local_d8,local_188);
    FUN_1001ab240(&local_d8);
  }
  if ((local_190 & 2) != 0) {
    local_f8[0] = &cf_sortArtist;
    FUN_1001a7b90(&local_d8);
    FUN_10021f1e0(param_1,&local_d8,local_178);
    FUN_1001ab240(&local_d8);
  }
  if ((local_190 & 4) != 0) {
    local_f8[0] = &cf_artworkUUID;
    FUN_1001a7b90(&local_d8);
    FUN_10021f1e0(param_1,&local_d8,local_168);
    FUN_1001ab240(&local_d8);
  }
  if ((local_190 & 8) != 0) {
    local_f8[0] = &cf_dataDict;
    FUN_1001a7b90(&local_d8);
    FUN_1001a7b90(&local_118,local_128);
    FUN_1001a9c16(param_1,&local_d8,&local_118);
    FUN_1001ab240(&local_118);
    FUN_1001ab240(&local_d8);
  }
  if ((local_190 & 0x10) != 0) {
    local_f8[0] = &cf_cloudArtistID;
    FUN_1001a7b90(&local_d8);
    FUN_10021f1e0(param_1,&local_d8,local_130);
    FUN_1001ab240(&local_d8);
  }
  FUN_1001b7a50(local_130);
  FUN_1001a8fac(local_128);
  FUN_1001b7a50(local_168);
  FUN_1001b7a50(local_178);
  FUN_1001b7a50(local_188);
LAB_1004c83f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

