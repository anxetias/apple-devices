// name: FUN_1004a881a
// address: 1004a881a

undefined8 FUN_1004a881a(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10015b12c(param_1 + 8,param_2 + 1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}

