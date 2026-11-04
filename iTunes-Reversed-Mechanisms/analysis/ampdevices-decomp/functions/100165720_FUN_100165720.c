// name: FUN_100165720
// address: 100165720

byte FUN_100165720(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_10017076e();
  bVar5 = 0;
  if (0 < lVar2) {
    lVar2 = 0;
    do {
      lVar3 = FUN_10016499b(param_1,lVar2);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "dictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_3 == 0) {
          cVar1 = FUN_100171439(lVar3,param_2);
        }
        else {
          cVar1 = FUN_100171493(lVar3,param_2,&local_58);
          if (cVar1 == '\0') goto LAB_1001657c9;
          cVar1 = FUN_100170633(CONCAT44(uStack_54,local_58),param_3);
        }
        bVar5 = bVar5 | cVar1 != '\0';
      }
LAB_1001657c9:
      lVar2 = lVar2 + 1;
      lVar3 = FUN_10017076e(param_1);
    } while (lVar2 < lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar5;
}

