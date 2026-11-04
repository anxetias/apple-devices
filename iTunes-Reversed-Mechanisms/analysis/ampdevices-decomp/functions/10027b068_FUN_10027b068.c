// name: FUN_10027b068
// address: 10027b068

void FUN_10027b068(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  FUN_1001aaef6(local_28);
  cVar1 = *(char *)(param_1 + 0xf9);
  if (param_3 == 0) {
    FUN_1001a7b90(local_20,local_28);
    puVar2 = &DAT_1008b5b08;
    if (cVar1 == '\x02') {
      puVar2 = &DAT_1008b5b18;
    }
    FUN_1001a9f38(puVar2,local_20);
  }
  else {
    puVar2 = &DAT_1008b5b08;
    if (cVar1 == '\x02') {
      puVar2 = &DAT_1008b5b18;
    }
    FUN_1001a7b90(local_20,local_28);
    FUN_1001a8bb0(local_30,param_3);
    FUN_1001a9c16(puVar2,local_20,local_30);
    FUN_1001ab240(local_30);
  }
  FUN_1001ab240(local_20);
  FUN_1001ab006(local_28);
  return;
}

