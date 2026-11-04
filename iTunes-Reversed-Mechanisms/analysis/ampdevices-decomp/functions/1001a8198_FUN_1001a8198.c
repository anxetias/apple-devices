// name: FUN_1001a8198
// address: 1001a8198

ulong FUN_1001a8198(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  long local_20;
  
  FUN_1001a7b90(&local_20);
  if ((*param_1 == 0) || (local_20 == 0)) {
    uVar2 = 0;
  }
  else {
    cVar1 = _CFArrayContainsValue(*param_1,*param_3,param_3[1]);
    uVar2 = CONCAT71((int7)((ulong)param_3 >> 8),cVar1 != '\0');
  }
  FUN_1001ab240(&local_20);
  return uVar2 & 0xffffffff;
}

