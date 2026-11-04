// name: FUN_100105f68
// address: 100105f68

void FUN_100105f68(void)

{
  long lVar1;
  bad_alloc *this;
  
  lVar1 = FUN_1001c64dc();
  if (lVar1 != 0) {
    return;
  }
  this = (bad_alloc *)___cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_10082c9a8,PTR__bad_alloc_10082c960);
}

