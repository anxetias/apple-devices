// name: FUN_100466aac
// address: 100466aac

undefined8
FUN_100466aac(int *param_1,int param_2,int param_3,int *param_4,int *param_5,ulong param_6)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((param_6 & 3) == 0) || (piVar1 = (int *)FUN_100466b8c(param_1), piVar1 == (int *)0x0)) {
    iVar5 = 0;
    uVar2 = 0xffffffce;
    if (((param_6 & 0xc) == 0) || (param_1 == (int *)0x0 || param_2 == 0)) goto LAB_100466b2b;
    iVar6 = *param_1;
    iVar3 = param_1[1];
    if (iVar6 == 0 && iVar3 == 0) goto LAB_100466b2b;
    piVar4 = (int *)0x0;
    piVar1 = param_1;
    do {
      if (iVar3 == param_2) {
        if ((param_3 == 0) || (iVar6 == param_3)) goto LAB_100466aec;
        if (piVar4 == (int *)0x0) {
          piVar4 = piVar1;
        }
      }
      iVar6 = piVar1[3];
      iVar3 = piVar1[4];
      piVar1 = piVar1 + 3;
    } while (iVar3 != 0 || iVar6 != 0);
    piVar1 = piVar4;
    if (piVar4 == (int *)0x0) {
      iVar5 = 0;
      goto LAB_100466b2b;
    }
  }
LAB_100466aec:
  iVar5 = *piVar1;
  if (piVar1[2] != 0) {
    param_2 = piVar1[2];
  }
  uVar2 = 0;
LAB_100466b2b:
  if (param_4 != (int *)0x0) {
    *param_4 = param_2;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar5;
  }
  return uVar2;
}

