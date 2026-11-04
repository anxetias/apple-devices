// name: FUN_10025a472
// address: 10025a472

/* WARNING: Removing unreachable block (ram,0x00010025a5a4) */
/* WARNING: Removing unreachable block (ram,0x00010025a5b6) */

void FUN_10025a472(long param_1,char param_2,undefined8 param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_240 [22];
  short local_22a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_100266b26(*(undefined8 *)(param_1 + 0x66d8));
    if (cVar2 == '\0') {
      iVar3 = *(int *)(param_1 + 0x66b0);
      if (iVar3 < 0x69506f64) {
        if ((iVar3 != 0x69506164) && (iVar3 != 0x6950686e)) goto LAB_10025a621;
      }
      else if ((iVar3 != 0x69506f74) && (iVar3 != 0x69506f64)) goto LAB_10025a621;
      if (param_2 != '\0') {
        local_22a = FUN_1004174a0(iVar3,0x10e6,0x10e7,0x10e5,0x10e8,0x1107,0x1114,0,0x1117,0x1119);
        iVar3 = FUN_100256606(param_1,param_3);
        if ((iVar3 + 0x80U & 0xffffff7f) != 0) {
          FUN_1004f0e83(param_1,&local_228);
          sVar1 = local_22a;
          FUN_1004fda52(local_240,*(undefined4 *)(param_1 + 0x28));
          FUN_100243ece((int)sVar1,&local_228,iVar3,local_240);
          FUN_1001b7a50(local_240);
        }
      }
    }
  }
LAB_10025a621:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

