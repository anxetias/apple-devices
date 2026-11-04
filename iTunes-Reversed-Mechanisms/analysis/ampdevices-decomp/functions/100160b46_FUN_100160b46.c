// name: FUN_100160b46
// address: 100160b46

undefined8 FUN_100160b46(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066f175(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    local_20 = FUN_1001df897(param_2);
    uVar2 = FUN_100160894(param_1,&local_20,param_2);
  }
  return uVar2;
}

