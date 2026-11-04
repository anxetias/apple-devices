// name: FUN_100324394
// address: 100324394

undefined8 FUN_100324394(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined1 *)*param_2;
  cVar1 = *(char *)(param_1 + 8);
  if (puVar2[0x22] != cVar1) {
    puVar2[0x22] = cVar1;
    if (cVar1 == '\0') {
      FUN_10031b040(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_10031ae5a();
      plVar3 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar3 + 0x10))(plVar3,0x74646472,plVar3,*puVar2,0);
    }
  }
  return 0;
}

