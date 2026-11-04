// name: FUN_1005b0056
// address: 1005b0056

char FUN_1005b0056(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_100170633(param_1,&cf_id);
  cVar2 = '\x01';
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(param_1,&cf_index);
    cVar2 = '\x02';
    if (cVar1 == '\0') {
      cVar2 = FUN_100170633(param_1,&cf_hash_FNV_1_64);
      cVar2 = (cVar2 != '\0') * '\x03';
    }
  }
  return cVar2;
}

