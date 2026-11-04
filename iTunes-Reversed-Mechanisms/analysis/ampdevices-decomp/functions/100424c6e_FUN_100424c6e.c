// name: FUN_100424c6e
// address: 100424c6e

undefined8 FUN_100424c6e(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 local_90 [4];
  undefined1 local_80 [22];
  char local_6a;
  char local_69;
  undefined4 local_68;
  int iStack_64;
  int local_60;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x8220202;
      iStack_64 = 0x7a0a90;
      local_60 = 1;
      local_5c = 0x822;
      local_5a = "outUserInterface != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto LAB_100424dab;
  }
  FUN_1001c62d9(param_2,0xb0);
  FUN_10041b42a(param_1,0,0,0,0);
  lVar1 = (long)&local_5a + 2;
  local_68 = 0;
  iStack_64 = 0;
  local_60 = 0;
  FUN_1001b7a44(lVar1);
  local_69 = '\0';
  FUN_1001b7a44(local_80);
  if (*(int *)(param_1 + 0x84) == 0) {
    bVar2 = 0;
  }
  else {
    uVar6 = FUN_1005e9a2c();
    bVar2 = FUN_1005e963c(uVar6,*(undefined4 *)(param_1 + 0x84),0);
  }
  cVar3 = FUN_100248343(local_80);
  if (cVar3 == '\0') {
    if ((((*(char *)(DAT_1008c76a0 + 0x1a91) == '\0') || (*(int *)(param_1 + 0x80) == 0)) ||
        (lVar7 = FUN_1004de449(), lVar7 == 0)) || (*(int *)(lVar7 + 0x16670) == 0)) {
      plVar8 = (long *)FUN_10039a28c();
      bVar4 = (**(code **)(*plVar8 + 0x28))(plVar8,0,&local_68,&local_69,0);
      if ((bVar4 & local_60 != 0) == 0 && (bVar2 & 1) == 0) {
        plVar8 = (long *)FUN_10039a28c();
        uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
        plVar8 = (long *)FUN_10039c016(uVar6,*(undefined4 *)(param_1 + 0x80),
                                       *(undefined4 *)(param_1 + 0x84));
        if (plVar8 != (long *)0x0) {
          cVar3 = (**(code **)(*plVar8 + 0x60))(plVar8,0);
          if (cVar3 != '\0') {
            iVar10 = *(int *)(param_1 + 0x1300);
            if (iVar10 == 8) {
              iVar10 = 0x10cc00e0;
LAB_1004250a6:
              uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),iVar10);
              FUN_1001b81f2(param_2 + 0x20,uVar6);
              *(undefined1 *)(param_2 + 0x68) = 0;
              FUN_1001c334a(&local_48,
                            (*(int *)(param_1 + 0x58) == 0x4d616320 ||
                            *(int *)(param_1 + 0x58) == 0x69427269) + 0x10cf000d);
              FUN_1001b80b2(param_2 + 0x38,&local_48);
              FUN_1001b7a50(&local_48);
              *(undefined1 *)(param_2 + 0x30) = 1;
              uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d5);
              FUN_1001b81f2(param_2 + 0x88,uVar6);
              lVar7 = 0x80;
              FUN_100424874(param_1,param_2 + 0x70);
LAB_100425132:
              *(undefined1 *)(param_2 + lVar7) = 0;
            }
            else {
              if (iVar10 == 7) {
LAB_100424f0f:
                iVar10 = *(byte *)(param_1 + 0x1353) + 0x10cc00e1;
                goto LAB_1004250a6;
              }
              if (iVar10 == 6) {
                if (*(char *)(param_1 + 0x1354) == '\x01') goto LAB_100424f0f;
                uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d5);
                FUN_1001b81f2(param_2 + 0x88,uVar6);
                uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00e7);
                FUN_1001b81f2(param_2 + 0x70,uVar6);
                *(undefined1 *)(param_2 + 0x80) = 1;
                if (*(int *)(param_1 + 0x58) == 0x69545620) goto LAB_10042515f;
                lVar7 = 0x30;
                FUN_100424320(param_1,param_2 + 0x20,param_2 + 0x38,param_2 + 0x68);
                goto LAB_100425132;
              }
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "0";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
LAB_10042515f:
            *(undefined1 *)(param_2 + 0x69) = 0;
            *(undefined1 *)(param_2 + 0xa8) = 0;
            goto LAB_100424d98;
          }
          cVar3 = (**(code **)(*plVar8 + 0x70))(plVar8);
          if (cVar3 != '\0') {
            FUN_100424bc2(param_1,param_2);
            goto LAB_100424d98;
          }
          cVar3 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_6a);
          if ((cVar3 != '\0') && (local_6a == '\x01')) {
            uVar6 = FUN_1001c337a(0x10cf0027);
            goto LAB_100424e08;
          }
        }
        plVar8 = (long *)FUN_10039a28c();
        uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
        plVar8 = (long *)FUN_10039c4fa(uVar6,0,*(undefined8 *)(param_1 + 0x620),
                                       *(undefined8 *)(param_1 + 0x588));
        if (plVar8 == (long *)0x0) {
          FUN_1004248be(param_1,param_2);
          goto LAB_100424d98;
        }
        (**(code **)(*plVar8 + 0x40))(&local_48,plVar8);
        uVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
        FUN_100424b3a(param_2,0x10cc00e3,&local_48,uVar5);
      }
      else {
        if ((local_60 == *(int *)(param_1 + 0x80)) ||
           (local_60 == *(int *)(param_1 + 0x84) || (bVar2 & 1) != 0)) {
          if (local_69 == '\x01') {
            iVar10 = *(int *)(param_1 + 0x58);
            bVar9 = iVar10 == 0x69427269 || iVar10 == 0x4d616320;
            uVar11 = bVar9 | 0x10cc0282;
            if (bVar2 == 0) {
              uVar11 = bVar9 + 0x10cc0285;
            }
          }
          else {
            iVar10 = *(int *)(param_1 + 0x58);
            uVar11 = (uint)(bVar2 ^ 1) + (uint)(bVar2 ^ 1) * 2 + 0x10cc0284;
          }
          uVar6 = FUN_100416f20(iVar10,uVar11);
          FUN_1001b81f2(param_2 + 0x10,uVar6);
          goto LAB_100424d98;
        }
        FUN_1001b7a5c(&local_48,lVar1);
        uVar11 = 0x10cc028a;
        if (local_69 != '\0') {
          uVar11 = (iStack_64 == 0x69427269 || iStack_64 == 0x4d616320) | 0x10cc0288;
        }
        FUN_100424b3a(param_2,uVar11,&local_48);
      }
      puVar12 = &local_48;
      goto LAB_100424d93;
    }
    uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc028b);
LAB_100424e08:
    FUN_1001b81f2(param_2 + 0x10,uVar6);
  }
  else {
    uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc028c);
    FUN_1001b7eb0(local_90,uVar6);
    FUN_1001bbec4(&local_48,local_90,local_80);
    FUN_1001b80b2(param_2 + 0x10,&local_48);
    FUN_1001b7a50(&local_48);
    puVar12 = local_90;
LAB_100424d93:
    FUN_1001b7a50(puVar12);
  }
LAB_100424d98:
  FUN_1001b7a50(local_80);
  FUN_1001b7a50(lVar1);
  uVar6 = 0;
LAB_100424dab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

