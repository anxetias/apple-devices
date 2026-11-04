// name: FUN_10058e184
// address: 10058e184

void FUN_10058e184(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_1001b8428(param_1 + 0x80);
  if ((cVar1 != '\0') && (*(long *)(param_1 + 0x90) == 0)) {
    return;
  }
  FUN_1001b811c(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  FUN_10058e136(param_1,4);
  return;
}

