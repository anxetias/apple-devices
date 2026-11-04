// name: FUN_10039ecf0
// address: 10039ecf0

undefined8 FUN_10039ecf0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_21;
  
  local_21 = (char)((ulong)in_RAX >> 0x38);
  plVar1 = (long *)*param_2;
  cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_21);
  if (cVar2 == '\0') {
LAB_10039ed69:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,0);
    if ((cVar2 == '\0') || ((*(char *)(param_1 + 8) == '\0' && (local_21 != '\0')))) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1);
      cVar2 = FUN_100169da8(uVar4,uVar3);
      if (cVar2 == '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1);
        cVar2 = FUN_100169da8(uVar4,uVar3);
        if (cVar2 == '\0') goto LAB_10039ed69;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

