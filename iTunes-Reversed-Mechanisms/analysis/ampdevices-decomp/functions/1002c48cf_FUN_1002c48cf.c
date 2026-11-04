// name: FUN_1002c48cf
// address: 1002c48cf

undefined1 FUN_1002c48cf(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 local_458 [512];
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *(int *)(param_1 + 0x66b0);
  lVar3 = 0;
  uVar7 = 0;
  if (iVar1 < 0x69506f64) {
    if ((iVar1 != 0x69506164) && (iVar1 != 0x6950686e)) goto LAB_1002c4a55;
  }
  else if ((iVar1 != 0x69506f74) && (uVar7 = 0, iVar1 != 0x69506f64)) goto LAB_1002c4a55;
  lVar3 = FUN_1001723b0(&cf_SerialNumbers,&cf_com_apple_iTunes_StoreDevices,
                        *(undefined8 *)PTR__kCFPreferencesCurrentUser_10082e108,
                        *(undefined8 *)PTR__kCFPreferencesAnyHost_10082e0e8);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFArrayGetTypeID();
    if (lVar4 == lVar5) {
      FUN_1001e4a2e(param_1 + 0x144,local_258);
      lVar4 = FUN_10017076e(lVar3);
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          cVar2 = FUN_100164bce(lVar3,lVar5,local_458);
          if (cVar2 == '\0') {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "JRCFArrayGetUStringAtIndex(serialNumberArray, serialNumberIndex, serialNumber)";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            cVar2 = FUN_1001e3edc(local_258,local_458,1);
            if (cVar2 != '\0') {
              uVar7 = 1;
              goto LAB_1002c4a55;
            }
          }
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
    }
  }
  uVar7 = 0;
LAB_1002c4a55:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

