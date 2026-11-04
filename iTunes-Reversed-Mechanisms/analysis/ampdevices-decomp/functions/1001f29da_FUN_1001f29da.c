// name: FUN_1001f29da
// address: 1001f29da

int FUN_1001f29da(int *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006c67a1(uVar5);
    }
  }
  else {
    if (param_2 != 0) {
      iVar3 = FUN_1001f25c0(param_1,param_2,0);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,"<integer>",9,*(undefined8 *)(param_1 + 0x12));
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              _snprintf(local_48,0x20,"%lld",param_3);
              pcVar1 = *(code **)(param_1 + 0x10);
              sVar4 = _strlen(local_48);
              iVar3 = (*pcVar1)(param_1,local_48,sVar4,*(undefined8 *)(param_1 + 0x12));
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  iVar3 = (**(code **)(param_1 + 0x10))
                                    (param_1,"</integer>\n",0xb,*(undefined8 *)(param_1 + 0x12));
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    FUN_1006c65e7(iVar3,uVar5);
                  }
                }
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                FUN_1006c6653(iVar3,uVar5);
              }
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006c66bf(iVar3,uVar5);
          }
        }
      }
      goto LAB_1001f2aea;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006c672b(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1001f2aea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

