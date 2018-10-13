open Jest;
open Expect;

describe("Fibonacci", () => {
  test("to work with 0", () =>
    expect(Fibonacci.(solution(0))) |> toBe(0)
  );
  test("to work with 1", () =>
    expect(Fibonacci.(solution(1))) |> toBe(1)
  );
  test("to work with 2", () =>
    expect(Fibonacci.(solution(2))) |> toBe(1)
  );
  test("to work with 5", () =>
    expect(Fibonacci.(solution(5))) |> toBe(5)
  );
  /* test("to work with 80", () =>
    expect(Fibonacci.(solution(80))) |> toBe(23416728348467685)
  ); */
});