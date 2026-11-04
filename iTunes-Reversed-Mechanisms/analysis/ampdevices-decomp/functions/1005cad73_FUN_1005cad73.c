// name: FUN_1005cad73
// address: 1005cad73

void FUN_1005cad73(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined4 local_670 [2];
  undefined1 *local_668;
  undefined8 *local_648;
  undefined8 local_640;
  undefined1 local_638 [512];
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 0x69506f64) {
    if (param_2 == 0x69506164) {
      uVar5 = 0x10ce;
    }
    else {
      if (param_2 != 0x6950686e) goto LAB_1005cadd0;
      uVar5 = 0x10cd;
    }
  }
  else {
    uVar5 = 0x10cc;
    if ((param_2 != 0x69506f64) && (param_2 != 0x69506f74)) {
LAB_1005cadd0:
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure";
        local_42c = 0x822;
        local_42a = "errorReportID != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005caef3;
    }
  }
  local_640 = param_1;
  if (param_4 == 0x48d) {
    bVar1 = FUN_1001b8428(param_5);
    param_4 = 0x48e - (uint)bVar1;
  }
  if ((param_4 + 0x80U & 0xffffff7f) != 0) {
    iVar3 = FUN_1004c6512(&local_648);
    if (iVar3 == 0) {
      cVar2 = FUN_1001b8428(param_5);
      if (cVar2 == '\0') {
        FUN_1001bb41a(param_5,local_638);
        puVar6 = local_670;
        local_670[0] = 1;
        local_668 = local_638;
      }
      else {
        puVar6 = (undefined4 *)0x0;
      }
      FUN_1001bb41a(param_3,&local_438);
      FUN_1004c5c38(*local_648,uVar5,param_4,&local_438,puVar6,0,0,0);
      FUN_1001b7a44(&local_438);
      FUN_1005cd4e3(local_640,local_648,&local_438);
      FUN_1001b7a50(&local_438);
      FUN_1004c6565(local_648);
    }
  }
LAB_1005caef3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

