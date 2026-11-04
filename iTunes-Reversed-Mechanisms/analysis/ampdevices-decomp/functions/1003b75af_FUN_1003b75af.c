// name: FUN_1003b75af
// address: 1003b75af

int FUN_1003b75af(int param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (param_1 < 0x48545450) {
    if (param_1 == 0x43442020) {
      sVar5 = 0x434;
    }
    else {
      if (param_1 != 0x44574e4c) {
        if (param_1 == 0x46494c45) goto LAB_1003b763f;
        goto LAB_1003b76fc;
      }
      sVar5 = 0x430;
    }
LAB_1003b76cd:
    _memcpy(param_3,(void *)(param_2 + 0x2c),sVar5);
  }
  else {
    if (param_1 < 0x4d46494c) {
      if (param_1 == 0x48545450) {
        sVar5 = 0x408;
        goto LAB_1003b76cd;
      }
      if (param_1 == 0x4d425546) goto LAB_1003b771c;
    }
    else {
      if (param_1 == 0x53485244) {
        sVar5 = 0x424;
        goto LAB_1003b76cd;
      }
      if (param_1 == 0x4d46494c) {
LAB_1003b763f:
        if ((param_1 == 0x46494c45) || (param_1 == 0x4d46494c)) {
          iVar2 = FUN_10017d489(param_2 + 0x2c,&local_228);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              FUN_1001e222d(&local_228,param_3 + 1);
              *param_3 = *(undefined4 *)(param_2 + 0x44c);
              uVar3 = FUN_1001e215a(param_3 + 1);
              param_3[9] = uVar3;
              iVar2 = 0;
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_248 = 0x8220202;
                local_244 = "Assertion failure";
                local_23c = 0x400;
                local_23a = iVar2;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x12
                                   );
              }
            }
          }
          goto LAB_1003b771c;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_228 = 0x8220202;
          local_224 = "Assertion failure";
          local_21c = 0x822;
          local_21a = "fileLocation != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
LAB_1003b76fc:
    iVar2 = -0x32;
  }
LAB_1003b771c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

