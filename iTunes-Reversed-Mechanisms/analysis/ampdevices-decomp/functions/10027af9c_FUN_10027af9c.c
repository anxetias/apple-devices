// name: FUN_10027af9c
// address: 10027af9c

undefined8 FUN_10027af9c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  
  FUN_1001aa318(&local_20);
  puVar3 = &DAT_1008b5b08;
  if (*(char *)(param_1 + 0xf9) == '\x02') {
    puVar3 = &DAT_1008b5b18;
  }
  FUN_1001aaef6(local_28,param_2);
  FUN_1001a7bac(local_30,local_28);
  cVar1 = FUN_1001a9056(puVar3,local_30,&local_20);
  FUN_1001ab240(local_30);
  FUN_1001ab006(local_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001705fc(local_20);
  }
  FUN_1001ab240(&local_20);
  return uVar2;
}

