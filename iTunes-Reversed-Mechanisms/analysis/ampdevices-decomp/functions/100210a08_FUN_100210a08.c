// name: FUN_100210a08
// address: 100210a08

ulong FUN_100210a08(long param_1,char param_2,undefined4 *param_3,undefined1 *param_4,
                   double *param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2ad4) == 0 && param_2 == '\x01') {
    if (*(char *)(param_1 + 0x28a1) != '\0') {
LAB_100210a5b:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 2;
        param_3[1] = *(undefined4 *)(param_1 + 0x21a0);
        FUN_1001b8dfc(&local_48,param_1 + 0x21e8);
        FUN_1001b80b2(param_3 + 4,&local_48);
        FUN_1001b7a50(&local_48);
        iVar3 = *(int *)(param_1 + 0x21b0);
        if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0x21a8), iVar3 == 0)) {
          iVar3 = *(int *)(param_1 + 0x21ac);
        }
        param_3[2] = iVar3;
      }
      if (param_4 != (undefined1 *)0x0) {
        uVar1 = 1;
        if ((*(int *)(param_1 + 0x2ad4) != 0xe) && (*(char *)(param_1 + 0x2852) == '\0')) {
          uVar1 = *(undefined1 *)(param_1 + 0x2856);
        }
        *param_4 = uVar1;
      }
      if (param_5 != (double *)0x0) {
        dVar6 = 0.0;
        if ((*(double *)(param_1 + 0x2ae0) != 0.0) || (NAN(*(double *)(param_1 + 0x2ae0)))) {
          dVar6 = (double)FUN_1001ebd46();
          dVar6 = dVar6 - *(double *)(param_1 + 0x2ae0);
        }
        *param_5 = dVar6;
      }
      uVar5 = CONCAT71((int7)((ulong)param_5 >> 8),1);
      if ((param_3 != (undefined4 *)0x0) && (param_3[2] == 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "isRestoreOrUpdateInProgress == false || outActiveDeviceInfo == nullptr || (outActiveDeviceInfo->objectID != 0)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_100210b39;
    }
  }
  else if (*(int *)(param_1 + 0x2ad4) != 0) goto LAB_100210a5b;
  uVar5 = 0;
LAB_100210b39:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

