// name: FUN_10054065c
// address: 10054065c

long FUN_10054065c(long *param_1,char param_2,int param_3,undefined1 param_4,undefined8 param_5,
                  undefined4 *param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,param_5);
    if (lVar2 == 0) {
      if (param_2 != '\0') {
        return 0;
      }
      goto LAB_10054067d;
    }
LAB_1005406c5:
    uVar3 = 0x69746d74;
  }
  else {
LAB_10054067d:
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((lVar1 < 1) ||
       (lVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,lVar1,0,param_5), lVar2 == 0)) {
      lVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,param_5);
      if (lVar2 != 0) {
        uVar3 = 0x63686170;
        goto LAB_1005406e5;
      }
      if ((0 < lVar1) ||
         (lVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,lVar1,param_4,param_5), lVar2 == 0)) {
        if (((char)param_3 == '\0') ||
           (lVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,param_5), lVar2 == 0)) {
          return 0;
        }
        goto LAB_1005406c5;
      }
    }
    uVar3 = 0x706f7374;
  }
LAB_1005406e5:
  *param_6 = uVar3;
  return lVar2;
}

