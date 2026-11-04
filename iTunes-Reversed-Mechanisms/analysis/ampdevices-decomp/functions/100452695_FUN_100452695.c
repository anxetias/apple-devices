// name: FUN_100452695
// address: 100452695

void FUN_100452695(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_1004545fc();
  plVar2 = auVar6._0_8_;
  if (plVar2 != auVar6._8_8_) {
    do {
      if (plVar2[6] == *param_3) {
        plVar3 = plVar2;
        plVar4 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          do {
            plVar1 = (long *)plVar3[2];
            bVar5 = (long *)*plVar1 != plVar3;
            plVar3 = plVar1;
          } while (bVar5);
        }
        else {
          do {
            plVar1 = plVar4;
            plVar4 = (long *)*plVar1;
          } while ((long *)*plVar1 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar2) {
          *param_1 = plVar1;
        }
        param_1[2] = param_1[2] + -1;
        FUN_1001b7512(param_1[1],plVar2);
        FUN_100453b6a(plVar2 + 4);
        operator_delete(plVar2);
        return;
      }
      plVar3 = (long *)plVar2[1];
      plVar4 = plVar2;
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar4[2];
          bVar5 = (long *)*plVar2 != plVar4;
          plVar4 = plVar2;
        } while (bVar5);
      }
      else {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    } while (plVar2 != auVar6._8_8_);
  }
  return;
}

