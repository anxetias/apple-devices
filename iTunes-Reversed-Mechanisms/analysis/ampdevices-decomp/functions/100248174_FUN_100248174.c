// name: FUN_100248174
// address: 100248174

undefined4
FUN_100248174(int param_1,int param_2,char param_3,undefined2 *param_4,undefined2 *param_5,
             undefined2 *param_6,undefined2 *param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  
  uVar5 = 0xfffffffffffffff4;
  do {
    if (*(int *)((long)&DAT_10071a58c + uVar5) == param_2) {
      if (((&DAT_10071a590)[uVar5] == param_3) || ((&DAT_10071a590)[uVar5] == '\0')) {
        uVar3 = *(undefined2 *)((long)&DAT_10071a592 + uVar5);
        uVar6 = *(undefined2 *)((long)&DAT_10071a594 + uVar5);
        uVar1 = *(undefined2 *)((long)&DAT_10071a596 + uVar5);
        uVar2 = 1;
        uVar4 = uVar1;
        goto LAB_100248265;
      }
    }
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x1500);
  if (param_1 < 0x6950686e) {
    if (param_1 == 0x48506f64) {
      uVar3 = 0x19;
    }
    else {
      if (param_1 != 0x57617463) {
        if (param_1 != 0x69506164) {
LAB_10024822f:
          uVar1 = 0x626;
          uVar6 = 0x10ce;
          uVar2 = 0;
          uVar3 = 0;
          uVar4 = 0x627;
          goto LAB_100248265;
        }
        uVar4 = 0x629;
        uVar1 = 0x628;
        uVar3 = 0x18;
        goto LAB_100248228;
      }
      uVar3 = 0x16;
    }
    uVar2 = 0;
    uVar6 = 0;
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x62b;
    uVar1 = 0x62a;
    if (param_1 == 0x6950686e) {
      uVar3 = 0x17;
    }
    else {
      if (param_1 == 0x69545620) {
        uVar1 = 0x593;
        uVar3 = 10;
        uVar2 = 0;
        uVar6 = 0;
        uVar4 = 0x593;
        goto LAB_100248265;
      }
      if (param_1 != 0x69506f74) goto LAB_10024822f;
      uVar3 = 0xf;
    }
LAB_100248228:
    uVar2 = 0;
    uVar6 = 0;
  }
LAB_100248265:
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = uVar6;
  }
  if (param_6 != (undefined2 *)0x0) {
    *param_6 = uVar1;
  }
  if (param_7 != (undefined2 *)0x0) {
    *param_7 = uVar4;
  }
  return uVar2;
}

