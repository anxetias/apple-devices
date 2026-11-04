// name: FUN_10058e1dc
// address: 10058e1dc

bool FUN_10058e1dc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001b9c66(param_2,param_1 + 0x60);
  if (iVar1 != 0) {
    FUN_1001b8172(param_1 + 0x60,param_2);
    FUN_10058e136(param_1,0x10);
  }
  return iVar1 != 0;
}

