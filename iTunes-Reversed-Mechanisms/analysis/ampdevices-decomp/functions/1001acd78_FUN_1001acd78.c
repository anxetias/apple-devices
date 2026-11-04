// name: FUN_1001acd78
// address: 1001acd78

undefined8 FUN_1001acd78(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFURLResponseGetHTTPResponse();
    if (lVar1 != 0) {
      uVar2 = _CFHTTPMessageGetResponseStatusCode(lVar1);
      return uVar2;
    }
  }
  return 0;
}

