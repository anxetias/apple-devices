// name: FUN_1001ab148
// address: 1001ab148

void FUN_1001ab148(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = _CFStringGetLength(lVar1);
    _CFStringGetCharacters(lVar1,0,uVar2,param_2);
    return;
  }
  return;
}

