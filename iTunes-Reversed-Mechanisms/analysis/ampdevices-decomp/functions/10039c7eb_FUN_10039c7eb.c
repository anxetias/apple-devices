// name: FUN_10039c7eb
// address: 10039c7eb

void FUN_10039c7eb(char param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  DAT_1008c7590 = DAT_1008c7590 + -1;
  if (DAT_1008c7590 != 0 || param_1 != '\0') {
    return;
  }
  plVar2 = (long *)FUN_10039a28c();
  uVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  FUN_1001c6987(uVar1,0x6461637a,0,0,0);
  return;
}

