// name: FUN_100183d74
// address: 100183d74

int FUN_100183d74(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char local_6b0 [80];
  undefined8 local_660;
  undefined1 local_658 [512];
  int *local_458;
  undefined8 local_450;
  char local_448;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
     ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068ab85(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    FUN_1001c62d9(&local_458,0x40);
    local_450 = 0;
    local_458 = param_2;
    iVar2 = (**(code **)(param_1 + 0x30))(0x66696c66,&local_458,*(undefined8 *)(param_1 + 0x38));
    iVar3 = 0;
    if ((iVar2 == 0) && (local_448 != '\0')) {
      *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
      iVar3 = FUN_1001879bd(param_2,0,&local_660);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar2 = FUN_100187bea(local_660,&local_458,local_6b0,local_658);
          if (iVar2 == 0) {
            do {
              if (local_6b0[0] == '\0') {
                FUN_100183f98(param_1,&local_458,local_6b0,local_658);
              }
              else {
                iVar3 = FUN_100183d74(param_1,&local_458);
                if (iVar3 != 0) {
                  if (iVar3 != -0x80) {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar1 != '\0') {
                      FUN_10068aaad(iVar3,uVar4);
                    }
                  }
                  goto LAB_100183ecf;
                }
              }
              iVar2 = FUN_100187bea(local_660,&local_458,local_6b0,local_658);
            } while (iVar2 == 0);
          }
          iVar3 = iVar2;
          if (iVar2 == -5000) {
            iVar3 = 0;
          }
          if (iVar2 == -0x589) {
            iVar3 = 0;
          }
LAB_100183ecf:
          FUN_100187c42(local_660);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10068ab19(iVar3,uVar4);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

