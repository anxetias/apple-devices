// name: FUN_100534237
// address: 100534237

ulong FUN_100534237(void *param_1,uint param_2,undefined8 param_3,short *param_4,short *param_5,
                   short *param_6,undefined4 param_7,char param_8,char param_9,uint param_10,
                   void *param_11)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  ulong uVar10;
  bool bVar11;
  char local_2f0 [80];
  int local_2a0 [2];
  undefined1 local_298 [16];
  undefined8 local_288;
  short *local_280;
  short *local_278;
  void *local_270;
  short *local_268;
  uint local_260;
  char local_259;
  uint local_258;
  char *local_254;
  undefined2 local_24c;
  uint local_24a;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_270 = param_11;
  local_259 = param_8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_280 = param_5;
  local_278 = param_4;
  local_268 = param_6;
  if (((param_10 & 1) != 0) && ((param_2 & 0x200004) == 0 && (param_2 & 0xc00008) != 0)) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar10 = FUN_100230d9d(param_11);
      return uVar10;
    }
    goto LAB_100534981;
  }
  local_260 = param_2;
  if ((param_10 & 2) == 0) {
    FUN_1004d59a4(local_2a0);
    iVar3 = FUN_1004d5a0e(param_1,local_2a0);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      local_288 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(local_288,0x10);
      if (cVar2 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,local_288,0x10,"%{public}s: err == (%d)",&local_238,0x12);
      }
    }
    if (local_2a0[0] == 0) {
      uVar4 = FUN_10017d477(param_1,local_2f0,0);
      uVar10 = (ulong)uVar4;
      if (uVar4 != 0xffffff80) {
        if (uVar4 == 0) {
          if (local_2f0[0] == '\0') {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "specInfo.isDirectory";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            uVar10 = 0xffffff88;
            FUN_1001782e9(0,0);
          }
          else {
            _memcpy(local_270,param_1,0x420);
            uVar5 = FUN_100533c8e();
            if ((local_260 & 0x200005) == 1 && param_9 != '\0') {
              FUN_1001e04f5("Apple Music",&local_238);
              uVar4 = FUN_100533b20(local_270,&local_238,uVar5,0,local_270);
              uVar10 = (ulong)uVar4;
              if (uVar4 != 0xffffff80) {
                if (uVar4 == 0) goto LAB_10053449a;
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 != '\0') {
                  puVar9 = &local_258;
                  local_258 = 0x8220202;
                  local_254 = "Assertion failure";
                  local_24c = 0x400;
                  local_24a = uVar4;
                  goto LAB_100534559;
                }
              }
            }
            else {
LAB_10053449a:
              if (((local_278 != (short *)0x0) || ((local_260 & 0xf00446) != 0)) ||
                 (uVar10 = 0, local_259 != '\0')) {
                if ((local_260 >> 0x15 & 1) == 0) {
                  if ((local_260 & 4) != 0) {
                    pcVar8 = "Podcasts";
                    goto LAB_1005346c3;
                  }
                  if ((local_260 & 2) != 0) {
                    pcVar8 = "Movies";
                    goto LAB_1005346c3;
                  }
                  if ((local_260 >> 10 & 1) != 0) {
                    pcVar8 = "Home Videos";
                    goto LAB_1005346c3;
                  }
                  if ((local_260 & 0x40) != 0) {
                    pcVar8 = "TV Shows";
                    goto LAB_1005346c3;
                  }
                  if ((local_260 & 0x1004000) != 0) {
                    pcVar8 = "Tones";
                    goto LAB_1005346c3;
                  }
                  if ((local_260 >> 0x14 & 1) != 0) {
                    pcVar8 = "Voice Memos";
                    goto LAB_1005346c3;
                  }
                  pcVar7 = "Compilations";
                  if (local_259 == '\0') {
                    pcVar7 = "Unknown Artist";
                  }
                  bVar11 = (local_260 & 0xc00000) != 0;
                  pcVar8 = "Books";
                  if (!bVar11) {
                    pcVar8 = pcVar7;
                  }
                  if (((bVar11 || local_278 == (short *)0x0) || local_259 != '\0') ||
                     (pcVar8 = "Unknown Artist", *local_278 == 0)) goto LAB_1005346c3;
                  FUN_1001e1c39(local_278,&local_238);
                }
                else {
                  pcVar8 = "iTunes U";
LAB_1005346c3:
                  FUN_1001e04f5(pcVar8,&local_238);
                }
                uVar4 = FUN_100533b20(local_270,&local_238,uVar5,0,local_270);
                uVar10 = (ulong)uVar4;
                if ((uVar4 != 0xffffff80) && (uVar4 != 0)) {
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 != '\0') {
                    local_258 = 0x8220202;
                    local_254 = "Assertion failure";
                    local_24c = 0x400;
                    local_24a = uVar4;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_258,
                                        0x12);
                  }
                }
              }
              if (((local_260 & 0x1f04446) != 0 || local_280 != (short *)0x0) &&
                 (local_238 = local_238 & 0xffff0000, (local_260 & 0x1104000) == 0)) {
                if ((local_260 & 0x402) == 0 || (local_260 & 0x200004) != 0) {
                  psVar1 = local_268;
                  if ((local_260 & 0x200044) == 0x40) {
joined_r0x0001005347b2:
                    local_268 = psVar1;
                    if (local_268 != (short *)0x0) {
LAB_1005348c2:
                      FUN_1001e1c39(local_268,&local_238);
                    }
                  }
                  else {
                    if ((local_260 >> 0x15 & 1) == 0) {
                      if ((local_260 & 4) == 0) {
                        psVar1 = local_278;
                        if ((local_260 & 0xc00000) != 0) goto joined_r0x0001005347b2;
                        pcVar8 = "Unknown Album";
                      }
                      else {
                        pcVar8 = "Unknown Podcast";
                      }
                    }
                    else {
                      pcVar8 = "Unknown iTunes U";
                    }
                    if ((local_280 != (short *)0x0) && (local_268 = local_280, *local_280 != 0))
                    goto LAB_1005348c2;
                    FUN_1001e04f5(pcVar8,&local_238);
                  }
                }
                if ((short)local_238 != 0) {
                  uVar4 = FUN_100533b20(local_270,&local_238,uVar5,0,local_270);
                  uVar10 = (ulong)uVar4;
                  if ((uVar4 != 0xffffff80) && (uVar4 != 0)) {
                    uVar6 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar2 != '\0') {
                      puVar9 = &local_258;
                      local_258 = 0x8220202;
                      local_254 = "Assertion failure";
                      local_24c = 0x400;
                      local_24a = uVar4;
                      goto LAB_100534559;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 == '\0') goto LAB_10053436e;
          puVar9 = &local_238;
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x400;
          local_22a = (char *)CONCAT44(local_22a._4_4_,uVar4);
LAB_100534559:
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar9,0x12);
        }
      }
    }
    else {
      uVar4 = FUN_100533cd0(param_1,local_260,param_3,0,local_278,local_280,local_268,param_7,
                            local_259,param_9,0,local_270);
      uVar10 = (ulong)uVar4;
    }
LAB_10053436e:
    FUN_1001b7a50(local_298);
  }
  else {
    _memcpy(param_11,param_1,0x420);
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
LAB_100534981:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

