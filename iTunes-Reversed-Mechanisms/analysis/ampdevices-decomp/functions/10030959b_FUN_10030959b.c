// name: FUN_10030959b
// address: 10030959b

long FUN_10030959b(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "trackInfo";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 0) {
      cVar2 = FUN_10047eee6(lVar5);
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
      cVar2 = FUN_10047eee6(lVar5);
      if (lVar1 != 0) {
        cVar3 = FUN_10044acc3(lVar5);
        cVar7 = (cVar3 == '\0') + '\x01';
        if (cVar3 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
        }
        for (lVar5 = FUN_1002b2671(lVar6,lVar1,0,100,cVar7,uVar4); lVar5 != 0;
            lVar5 = FUN_1002b2870(lVar5,0,100,cVar7,uVar4)) {
          cVar3 = FUN_10047eee6(*(undefined8 *)(lVar5 + 8));
          if ((((cVar3 == cVar2) && (*(long *)(lVar5 + 8) != *(long *)(param_1 + 8))) &&
              ((cVar3 = FUN_1002ac9e0(lVar5), cVar3 != '\0' ||
               (cVar3 = FUN_1002aca8c(lVar5), cVar3 != '\0')))) &&
             (cVar3 = FUN_100322314(param_1,*(undefined8 *)(lVar5 + 8)), cVar3 != '\0')) {
            lVar5 = *(long *)(lVar5 + 8);
            if (lVar5 != 0) goto LAB_10030976b;
            break;
          }
        }
      }
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x68) != 0) {
      FUN_100300f72(param_1,&local_238);
      lVar6 = FUN_1002b3285(lVar6,&local_238);
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          cVar3 = FUN_10047eee6(*(undefined8 *)(lVar6 + 8));
          if (((cVar3 == cVar2) && (*(long *)(lVar6 + 8) != *(long *)(param_1 + 8))) &&
             (((cVar3 = FUN_1002ac9e0(lVar6), cVar3 != '\0' ||
               (cVar3 = FUN_1002aca8c(lVar6), cVar3 != '\0')) &&
              (cVar3 = FUN_100322314(param_1,*(undefined8 *)(lVar6 + 8)), cVar3 != '\0')))) {
            lVar5 = *(long *)(lVar6 + 8);
            break;
          }
          lVar6 = FUN_1002b3795(lVar6);
        } while (lVar6 != 0);
        goto LAB_10030976b;
      }
    }
    lVar5 = 0;
  }
LAB_10030976b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

