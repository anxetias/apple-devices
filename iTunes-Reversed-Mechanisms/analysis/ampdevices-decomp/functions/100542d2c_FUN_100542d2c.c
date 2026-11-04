// name: FUN_100542d2c
// address: 100542d2c

undefined8
FUN_100542d2c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x260))();
  if ((cVar2 != '\0') && (plVar1 = (long *)param_1[0x1fc], plVar1 != (long *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3,param_4,param_5);
    if (cVar2 != '\0') {
      (*(code *)**(undefined8 **)param_1[0x1fc])
                ((undefined8 *)param_1[0x1fc],param_2,param_3,param_4,param_5);
      (**(code **)(*param_1 + 0x268))(param_1);
    }
  }
  return 0;
}

