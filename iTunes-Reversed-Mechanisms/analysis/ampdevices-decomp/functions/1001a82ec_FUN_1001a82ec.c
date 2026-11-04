// name: FUN_1001a82ec
// address: 1001a82ec

void FUN_1001a82ec(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else if (param_4 == 0) {
    uVar1 = _CFDataCreate(DAT_1008c4d98);
  }
  else {
    uVar1 = _CFDataCreateWithBytesNoCopy();
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

