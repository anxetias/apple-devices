// name: FUN_10014141c
// address: 10014141c

undefined8 FUN_10014141c(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  switch(param_2) {
  case 0:
    pcVar3 = "DELETE";
    break;
  case 1:
    pcVar3 = "GET";
    break;
  case 2:
    pcVar3 = "POST";
    break;
  case 3:
    pcVar3 = "PATCH";
    break;
  case 4:
    pcVar3 = "PUT";
    break;
  default:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10014a5ec(uVar2);
    }
    FUN_1001782e9(0,1);
    pcVar3 = "";
  }
  FUN_1001b7b04(param_1,pcVar3);
  return param_1;
}

