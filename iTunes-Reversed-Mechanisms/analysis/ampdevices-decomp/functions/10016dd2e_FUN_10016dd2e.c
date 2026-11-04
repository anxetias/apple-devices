// name: FUN_10016dd2e
// address: 10016dd2e

void FUN_10016dd2e(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    if ((char)param_1[7] != '\x01') {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (0xf < (ulong)(lVar1 - param_1[3])) {
      if (*(ulong *)(lVar1 + -0x10) != 0) {
        lVar2 = *param_1;
        if (*(char *)(lVar1 + -8) == '\x01') {
          puVar3 = *(undefined1 **)(lVar2 + 0x18);
          if (*(undefined1 **)(lVar2 + 0x20) <= puVar3 + 1) {
            FUN_10016d504(lVar2,1);
            puVar3 = *(undefined1 **)(lVar2 + 0x18);
          }
          *(undefined1 **)(lVar2 + 0x18) = puVar3 + 1;
          *puVar3 = 0x2c;
        }
        else {
          uVar4 = 0x3a;
          if ((*(ulong *)(lVar1 + -0x10) & 1) == 0) {
            uVar4 = 0x2c;
          }
          puVar3 = *(undefined1 **)(lVar2 + 0x18);
          if (*(undefined1 **)(lVar2 + 0x20) <= puVar3 + 1) {
            FUN_10016d504(lVar2,1);
            puVar3 = *(undefined1 **)(lVar2 + 0x18);
          }
          *(undefined1 **)(lVar2 + 0x18) = puVar3 + 1;
          *puVar3 = uVar4;
        }
      }
      if (((*(char *)(lVar1 + -8) != '\0') || (param_2 == 5)) ||
         ((*(ulong *)(lVar1 + -0x10) & 1) != 0)) {
        *(ulong *)(lVar1 + -0x10) = *(ulong *)(lVar1 + -0x10) + 1;
        return;
      }
      goto LAB_10016de09;
    }
    FUN_100679128();
  }
  FUN_100679149();
LAB_10016de09:
                    /* WARNING: Subroutine does not return */
  FUN_100679105();
}

