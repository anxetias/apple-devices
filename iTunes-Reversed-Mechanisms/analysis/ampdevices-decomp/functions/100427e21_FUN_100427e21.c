// name: FUN_100427e21
// address: 100427e21

bool FUN_100427e21(char *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (((*param_1 == '\0') && (param_1[1] == '\0')) && (param_1[2] == '\0')) {
    bVar2 = true;
  }
  else {
    cVar1 = FUN_1001e0934(*param_1);
    if ((cVar1 == 'E') && (cVar1 = FUN_1001e0934(param_1[1]), cVar1 == 'N')) {
      cVar1 = FUN_1001e0934(param_1[2]);
      return cVar1 == 'G';
    }
    bVar2 = false;
  }
  return bVar2;
}

