// name: _recv
// address: 1006cef0c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _recv(int param_1,void *param_2,size_t param_3,int param_4)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__recv_10082d110)();
  return sVar1;
}

