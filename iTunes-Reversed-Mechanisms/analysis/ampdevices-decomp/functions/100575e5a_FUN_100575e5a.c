// name: FUN_100575e5a
// address: 100575e5a

undefined8 FUN_100575e5a(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if ((long *)*param_2 != plVar1) {
    if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0xf0) != '\0')) {
      (**(code **)(*plVar1 + 0x50))(plVar1,0);
    }
    FUN_100203686((long *)(param_1 + 8),param_2);
    plVar1 = *(long **)(param_1 + 8);
    if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0x92) == '\x01')) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
    }
  }
  return 0;
}

