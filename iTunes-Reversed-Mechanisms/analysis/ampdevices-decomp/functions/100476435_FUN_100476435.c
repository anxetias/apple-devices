// name: FUN_100476435
// address: 100476435

void FUN_100476435(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_1002b798e();
  plVar3 = auVar6._0_8_;
  if (plVar3 != auVar6._8_8_ && plVar3 != param_1 + 1) {
    do {
      plVar1 = (long *)plVar3[1];
      if (plVar3[5] == param_2) {
        plVar2 = plVar3;
        if (plVar1 == (long *)0x0) {
          do {
            plVar4 = (long *)plVar2[2];
            bVar5 = (long *)*plVar4 != plVar2;
            plVar2 = plVar4;
          } while (bVar5);
        }
        else {
          do {
            plVar4 = plVar1;
            plVar1 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar3) {
          *param_1 = (long)plVar4;
        }
        param_1[2] = param_1[2] + -1;
        FUN_1001b7512(param_1[1],plVar3);
        operator_delete(plVar3);
        return;
      }
      plVar2 = plVar3;
      if (plVar1 == (long *)0x0) {
        do {
          plVar3 = (long *)plVar2[2];
          bVar5 = (long *)*plVar3 != plVar2;
          plVar2 = plVar3;
        } while (bVar5);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    } while (plVar3 != auVar6._8_8_);
  }
  return;
}

