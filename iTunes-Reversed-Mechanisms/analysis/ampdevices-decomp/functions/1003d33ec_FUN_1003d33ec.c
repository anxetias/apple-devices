// name: FUN_1003d33ec
// address: 1003d33ec

undefined8 FUN_1003d33ec(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "syncExceptions != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_10040fdb0();
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0x1429) == '\0')) {
      bVar2 = 0;
    }
    else {
      bVar2 = __os_feature_enabled_impl("AMPLibrary","PhotoKitCloudDownload");
      bVar2 = bVar2 ^ 1;
    }
    *(byte *)(param_2 + 0x14) = bVar2;
    lVar4 = FUN_100496019(param_1);
    if (lVar4 != 0) {
      uVar6 = 0;
      do {
        if (*(char *)(lVar4 + 0x80) == '\x04') {
          *(undefined1 *)(lVar4 + 0xb0) = 1;
LAB_1003d3491:
          if (*(int *)(lVar4 + 0xa4) != 0) {
            FUN_1001b7a44(&local_58);
            iVar3 = FUN_10058f16e(lVar4,&local_58);
            if (iVar3 == 0) {
              *(undefined1 *)(param_2 + 0x12) = 1;
              FUN_10057d6a2(&local_58,0x33,param_2 + 0x208);
              puVar5 = (undefined1 *)(lVar4 + 0xb1);
LAB_1003d34d9:
              *puVar5 = 1;
              uVar6 = 1;
            }
            else {
              puVar5 = (undefined1 *)(param_2 + 0x13);
              if (*(char *)(param_2 + 0x12) == '\0') goto LAB_1003d34d9;
            }
            FUN_1001b7a50(&local_58);
          }
        }
        else if (*(char *)(lVar4 + 0xb0) != '\0') goto LAB_1003d3491;
        lVar4 = FUN_1004960d0(lVar4);
      } while (lVar4 != 0);
      goto LAB_1003d3522;
    }
  }
  uVar6 = 0;
LAB_1003d3522:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

