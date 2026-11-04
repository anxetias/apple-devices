// name: FUN_100169491
// address: 100169491

bool FUN_100169491(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  ushort local_1a;
  
  cVar1 = FUN_100172017(param_1,2,&local_1a);
  bVar2 = local_1a < 0x100;
  if (!bVar2 || cVar1 == '\0') {
    local_1a = 0;
  }
  *param_2 = (char)local_1a;
  return bVar2 && cVar1 != '\0';
}

