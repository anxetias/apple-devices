// name: ~bad_weak_ptr
// address: 10091d000

/* WARNING: Control flow encountered bad instruction data */
/* std::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

