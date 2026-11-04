// name: FUN_1002fbec6
// address: 1002fbec6

bool FUN_1002fbec6(undefined2 *param_1,uint param_2,short *param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  short local_238;
  undefined1 local_236 [510];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (short *)0x0) {
    *param_3 = 0;
  }
  bVar6 = false;
  if (param_1 != (undefined2 *)0x0) {
    lVar5 = *(long *)(DAT_1008c76a0 + 0x1a48);
    uVar4 = 0;
    if (param_2 != 0) {
      do {
        uVar2 = FUN_1001e39bb(*param_1);
        uVar4 = param_2;
        if ((uVar2 & 0x3c) == 0) goto LAB_1002fbf3c;
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      uVar4 = 0;
    }
LAB_1002fbf3c:
    uVar3 = 0xff;
    if (uVar4 < 0xff) {
      uVar3 = uVar4;
    }
    if (*(int *)(DAT_1008c76a0 + 0x1a50) != 0) {
      lVar5 = lVar5 + 2;
      uVar4 = 0;
      do {
        cVar1 = FUN_1001e3389(param_1,uVar3,lVar5,*(undefined2 *)(lVar5 + -2),1);
        if (cVar1 != '\0') {
          if (param_3 == (short *)0x0) {
            bVar6 = true;
          }
          else {
            local_238 = (short)uVar3;
            FUN_1001c631b(param_1,local_236,uVar3 * 2);
            FUN_1001dffe0(&local_238,1,*(undefined2 *)(lVar5 + -2));
            FUN_1001e1c39(&local_238,param_3);
            bVar6 = *param_3 != 0;
          }
          goto LAB_1002fbffd;
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x80;
      } while (uVar4 < *(uint *)(DAT_1008c76a0 + 0x1a50));
    }
    if (param_3 != (short *)0x0) {
      *param_3 = (short)uVar3;
      FUN_1001c631b(param_1,param_3 + 1,uVar3 * 2);
    }
    bVar6 = false;
  }
LAB_1002fbffd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}

