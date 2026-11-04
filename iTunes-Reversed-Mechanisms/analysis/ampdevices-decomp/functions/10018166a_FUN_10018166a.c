// name: FUN_10018166a
// address: 10018166a

int FUN_10018166a(int *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_6e8 [80];
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  int local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  int *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined1 *local_668;
  undefined1 local_658 [1056];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068937c(uVar3);
    }
  }
  else if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100689306(uVar3);
    }
  }
  else if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100689290(uVar3);
    }
  }
  else {
    if (param_2[6] != 0) {
      iVar2 = FUN_10017d406(param_1,0,local_6e8,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (local_6e8[0] == '\x01') {
            local_698 = (undefined4)*param_2;
            uStack_694 = *(undefined4 *)((long)param_2 + 4);
            uStack_690 = (undefined4)param_2[1];
            uStack_68c = *(undefined4 *)((long)param_2 + 0xc);
            local_688 = (int)param_2[2];
            uStack_684 = *(undefined4 *)((long)param_2 + 0x14);
            uStack_680 = (undefined4)param_2[3];
            uStack_67c = *(undefined4 *)((long)param_2 + 0x1c);
            uStack_670 = (undefined4)param_2[5];
            uStack_66c = *(undefined4 *)((long)param_2 + 0x2c);
            local_668 = local_238;
            local_678 = param_1;
            iVar2 = FUN_10017e4d0();
            if (iVar2 == 0) {
              do {
                iVar2 = FUN_10017ecc9(param_1,local_238,local_658,0);
                if (iVar2 != 0) {
                  FUN_1001e1c39(local_238,param_2[6]);
                  iVar2 = 0;
                  goto LAB_1001817d0;
                }
                local_688 = local_688 + 1;
                iVar2 = FUN_10017e4d0(&local_698);
              } while (iVar2 == 0);
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100689142(iVar2,uVar3);
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006890cc(uVar3);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x57f;
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006891ae(iVar2,uVar3);
          }
        }
      }
      goto LAB_1001817d0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068921a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1001817d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

