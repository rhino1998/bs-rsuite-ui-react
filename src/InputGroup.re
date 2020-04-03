[@bs.module "rsuite"] [@react.component]
external make:
  (
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element=?,
    ~classPrefix: string=?,
    ~className: string=?,
    ~inside: bool=?,
    ~disabled: bool=?
  ) =>
  React.element =
  "InputGroup";

module Button = {
  [@bs.module "rsuite"] [@bs.scope "InputGroup"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~active: bool=?,
      ~disabled: bool=?,
      ~loading: bool=?,
      ~block: bool=?,
      ~href: string=?,
      ~componentClass: unit => React.element=?,
      ~appearance: [@bs.string] [
                     | `primary
                     | `link
                     | `subtle
                     | `default
                     | `ghost
                   ]
                     =?,
      ~color: [@bs.string] [
                | `red
                | `orange
                | `yellow
                | `green
                | `cyan
                | `blue
                | `violet
              ]
                =?,
      ~size: [@bs.string] [ | `lg | `md | `sm | `xs]=?,
      ~onClick: ReactEvent.Mouse.t => unit=?
    ) =>
    React.element =
    "Button";
};

module Addon = {
  [@bs.module "rsuite"] [@bs.scope "InputGroup"] [@react.component]
  external make:
    (
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,
      ~disabled: bool=?,
    ) =>
    React.element =
    "Addon";
};
