// name: FUN_100534e54
// address: 100534e54

int FUN_100534e54(long param_1,undefined8 param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0(param_2);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRFileSpecIsValid(objectSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    iVar2 = FUN_10017d5ba(param_2,&local_458);
    if (param_1 != 0 && param_4 != '\0') {
      param_4 = FUN_100183bb2(param_1,param_2);
    }
    if ((param_3 == '\0') || (cVar1 = FUN_10018cc4d(param_2), cVar1 == '\0')) {
      iVar3 = FUN_100182d4d(param_2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        cVar1 = FUN_10017fbfb(param_2);
        if (cVar1 == '\0') {
          if (iVar3 != -0x2f) goto LAB_100534f66;
          iVar3 = FUN_1001893fe(param_2);
        }
        else {
          iVar3 = FUN_100182d59(param_2,0);
        }
      }
    }
    else {
      iVar3 = FUN_100193820(param_2);
    }
    if ((((param_1 != 0) && (iVar3 == 0)) && (param_4 != '\0')) && (iVar2 == 0)) {
      FUN_100534fe1(param_1,&local_458);
      iVar3 = 0;
    }
  }
LAB_100534f66:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

