// name: FUN_100587e14
// address: 100587e14

undefined8 FUN_100587e14(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *param_2;
  bVar1 = *(byte *)(lVar2 + 0x298);
  if ((bVar1 & 1) == 0) goto LAB_10058808d;
  lVar7 = *(long *)(lVar2 + 0x48);
  if (lVar7 == 0) {
    if ((bVar1 & 2) == 0) goto LAB_10058808d;
    uVar8 = 0;
LAB_100587e7b:
    uVar4 = FUN_1001d0b82(*(undefined8 *)(lVar2 + 0x2a8));
    uVar9 = 1;
    if (uVar8 == uVar4) {
      if ((uVar4 != 0) && (lVar7 = *(long *)(lVar2 + 0x48), lVar7 != 0)) {
        do {
          iVar5 = FUN_1001d17e2(*(undefined8 *)(lVar2 + 0x2a8),1,0x28,*(undefined8 *)(lVar7 + 0x60),
                                &local_58);
          if (iVar5 != 0) {
            uVar9 = 2;
            goto LAB_100587ee2;
          }
          lVar7 = *(long *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
      goto LAB_10058808d;
    }
  }
  else {
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      lVar7 = *(long *)(lVar7 + 0x30);
    } while (lVar7 != 0);
    if ((bVar1 & 2) != 0) goto LAB_100587e7b;
    uVar9 = 3;
    if (uVar8 == 0) goto LAB_10058808d;
  }
LAB_100587ee2:
  FUN_100314020(lVar2);
  *(byte *)(lVar2 + 0x298) = *(byte *)(lVar2 + 0x298) | 2;
  if (DAT_1008c2618 != -1) {
    _dispatch_once(&DAT_1008c2618,&PTR___NSConcreteGlobalBlock_10086a960);
  }
  uVar6 = DAT_1008c2610;
  cVar3 = _os_log_type_enabled(DAT_1008c2610,0);
  if (cVar3 != '\0') {
    FUN_100486ef1(local_68,lVar2);
    local_54 = (char *)FUN_1001b83ae(local_68);
    local_58 = 0x8220202;
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,uVar9);
    __os_log_impl(0x100000000,uVar6,0,
                  "spl> Fixing smart folder playlist \"%{public}s\": reason = %d",&local_58,0x12);
    FUN_1001b7a50(local_68);
  }
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "false";
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
  FUN_1001d0a60(*(undefined8 *)(lVar2 + 0x2a8));
  lVar7 = *(long *)(lVar2 + 0x48);
  if (lVar7 != 0) {
    do {
      iVar5 = FUN_1001d06cb(*(undefined8 *)(lVar2 + 0x2a8),1,0x28,*(undefined8 *)(lVar7 + 0x60));
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      lVar7 = *(long *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  FUN_1002899cf(*(undefined8 *)(lVar2 + 0x2a8),lVar2 + 0x2c8);
  lVar7 = lVar2;
  do {
    FUN_1005821b3(lVar7,1);
    lVar7 = *(long *)(lVar7 + 0x28);
  } while (lVar7 != 0);
  FUN_1002899cf(*(undefined8 *)(lVar2 + 0x2a8),lVar2 + 0x2c8);
  FUN_1004874fd(lVar2,0x20000);
  FUN_1003142ca(lVar2);
LAB_10058808d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

